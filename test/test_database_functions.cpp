//
// Created by rwardrup on 8/27/2020.
//

#include "../include/Catch2.h"
#include "../src/Database.h"
#include <iostream>
#include <stdio.h>
#include <fstream>

Database db;

inline bool exists(const std::string& filename){
    std::ifstream f(filename.c_str());
    return f.good();
}

TEST_CASE("Init DB", "[DB Creation]") {
    const char *file_name = "testdb.sqlite";

    if (remove(file_name)) {
        std::cout << "Removed existing testdb.sqlite file";
    }

    Storage storage = initStorage(file_name);
    db.writeDbToDisk(storage);
    std::vector table_names = storage.table_names();
    REQUIRE( exists(file_name) == true);
    REQUIRE( table_names.at(0) == "items");
    std::remove(file_name);
}

TEST_CASE( "DB IO", "[DB IO]" ) {
    const char *file_name = "testdb.sqlite";

    if (remove(file_name)) {
        std::cout << "Removed existing testdb.sqlite file";
    }

    Storage storage = initStorage(file_name);
    db.writeDbToDisk(storage);

    Item item{-1, "The Silmarillion", "Book", 1998,
              3, 7, 8.99, 1, true,
              "This is absolutely my favorite Tolkien book."};
    int firstInsertedId = storage.insert(item);

    Item secondItem{-1, "HF Ham Radio", "Electronics", 2001, 8,
                    14, 599.99, 1, true, "Great radio."};
    int secondInsertedId = storage.insert(secondItem);

    Item book = storage.get<Item>(firstInsertedId);
    Item radio = storage.get<Item>(secondInsertedId);

    REQUIRE ( firstInsertedId == 1 );
    REQUIRE ( secondInsertedId == 2 );
    REQUIRE( book.itemName == "The Silmarillion" );
    REQUIRE( book.purchasePrice == 8.99 );
    REQUIRE( book.notes == "This is absolutely my favorite Tolkien book." );

    std::remove(file_name);
}

TEST_CASE( "DB Truncate", "[DB Truncate]" ) {
    const char *file_name = "testdb.sqlite";

    if (remove(file_name)) {
        std::cout << "Removed existing testdb.sqlite file";
    }

    Storage storage = initStorage(file_name);
    db.writeDbToDisk(storage);

    Item item{-1, "The Silmarillion", "Book", 1998,
              3, 7, 8.99, 1, true,
              "This is absolutely my favorite Tolkien book."};
    int firstInsertedId = storage.insert(item);

    Item secondItem{-1, "HF Ham Radio", "Electronics", 2001, 8,
                    14, 599.99, 1, true, "Great radio."};
    int secondInsertedId = storage.insert(secondItem);
    db.writeDbToDisk(storage);
    db.truncate(storage);
    std::vector<Item> allItems = db.read(file_name);

    REQUIRE( allItems.empty() == true);
}

TEST_CASE( "Delete Row", "[Delete Row]" ) {
    const char *file_name = "testdb.sqlite";
    int min_id = 3;
    int max_id = -1;

    if (remove(file_name)) {
        std::cout << "Removed existing testdb.sqlite file";
    }

    Storage storage = initStorage(file_name);
    db.writeDbToDisk(storage);

    Item firstItem{-1, "The Silmarillion", "Book", 1998,
              3, 7, 8.99, 1, true,
              "This is absolutely my favorite Tolkien book."};

    Item secondItem{-1, "HF Ham Radio", "Electronics", 2001, 8,
                    14, 599.99, 1, true, "Great radio."};
    storage.insert(secondItem);
    storage.insert(firstItem);

    db.writeDbToDisk(storage);
    db.deleteRow(storage, 1);
    db.writeDbToDisk(storage);
    std::vector<Item> items = db.read(file_name);

    for(const auto& item : items) {
        if(item.id > max_id)
            max_id = item.id;
        if(item.id < min_id)
            min_id = item.id;
    }

    REQUIRE(items.empty() == false);
    REQUIRE(items.size() == 1);
    REQUIRE(max_id == min_id);
}

TEST_CASE( "Read Row", "[Read Row]" ) {
    const char *file_name = "testdb.sqlite";

    if (remove(file_name)) {
        std::cout << "Removed existing testdb.sqlite file";
    }

    Storage storage = initStorage(file_name);
    db.writeDbToDisk(storage);

    Item firstItem{-1, "The Silmarillion", "Book", 1998,
                   3, 7, 8.99, 1, true,
                   "This is absolutely my favorite Tolkien book."};

    Item secondItem{-1, "HF Ham Radio", "Electronics", 2001, 8,
                    14, 599.99, 1, true, "Great radio."};
    storage.insert(firstItem);
    storage.insert(secondItem);
    Item silmarillion = db.read_row(storage, 1);
    Item radio = db.read_row(storage, 2);

    REQUIRE(silmarillion.id == 1);
    REQUIRE(silmarillion.count == 1);
    REQUIRE(silmarillion.purchasePrice == 8.99);
    REQUIRE(radio.id == 2);
    REQUIRE(radio.purchasePrice == 599.99);
    REQUIRE(radio.purchaseMonth == 8);
}

TEST_CASE( "Get DB Category", "[Get DB Category]" ) {
    const char *file_name = "testdb.sqlite";

    if (remove(file_name)) {
        std::cout << "Removed existing testdb.sqlite file";
    }

    Storage storage = initStorage(file_name);
    db.writeDbToDisk(storage);

    Item firstItem{-1, "The Silmarillion", "Book", 1998,
                   3, 7, 8.99, 1, true,
                   "This is absolutely my favorite Tolkien book."};

    Item secondItem{-1, "HF Ham Radio", "Electronics", 2001, 8,
                    14, 599.99, 1, true, "Great radio."};
    storage.insert(firstItem);
    storage.insert(secondItem);

    std::vector<Item> radio_item = db.filter("Electronics", file_name);
    std::vector<Item> all_items = db.filter("All Items", file_name);

    REQUIRE(radio_item.size() == 1);
    REQUIRE(radio_item.at(0).category == "Electronics");
    REQUIRE(radio_item.at(0).purchaseYear == 2001);
    REQUIRE(radio_item.at(0).id == 2);
    REQUIRE(all_items.size() == 2);
    REQUIRE(all_items.at(0).category == "Book");
    REQUIRE(all_items.at(1).itemName == "HF Ham Radio");
}