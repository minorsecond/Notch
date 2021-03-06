//
// Created by rwardrup on 9/4/2020.
//

#ifndef OWNLY_EXPORTOPTIONS_H
#define OWNLY_EXPORTOPTIONS_H

#include <QDialog>
#include "ui_export_options.h"

class ExportDialog : public QDialog, public Ui::ExportOptions {
    /*
     * QDialog methods
     */

    Q_OBJECT
    Ui::ExportOptions ui{};
public:
    explicit ExportDialog([[maybe_unused]] QWidget *parent = nullptr, std::string database_path = "ownly_db.db");
    std::string get_file_path();
    std::string get_filter_value();

private:
    void populate_categories(std::string database_path);

private slots:
    void open_file_save_picker();
};

#endif //OWNLY_EXPORTOPTIONS_H
