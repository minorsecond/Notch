/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Item;
    QAction *actionQt5;
    QWidget *centralwidget;
    QLineEdit *ItemName;
    QFrame *line_2;
    QLabel *ItemNameLabel;
    QLabel *ItemCategoryLabel;
    QDateEdit *ItemPurchaseDate;
    QLabel *ItemPurchaseDateLabel;
    QTextEdit *ItemNotes;
    QLabel *ItemNotesLabel;
    QLabel *ItemPurchasePriceLabel;
    QLineEdit *ItemPurchasePrice;
    QLabel *InventoryListLabel;
    QComboBox *ItemCategory;
    QCheckBox *ItemUsedInLastSixMonths;
    QFrame *line_3;
    QLabel *ItemCountLabel;
    QSpinBox *ItemCount;
    QPushButton *dbSubmitButton;
    QTableWidget *inventoryList;
    QComboBox *ViewCategoryComboBox;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuAbout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1050, 511);
        actionNew_Item = new QAction(MainWindow);
        actionNew_Item->setObjectName(QString::fromUtf8("actionNew_Item"));
        actionQt5 = new QAction(MainWindow);
        actionQt5->setObjectName(QString::fromUtf8("actionQt5"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ItemName = new QLineEdit(centralwidget);
        ItemName->setObjectName(QString::fromUtf8("ItemName"));
        ItemName->setGeometry(QRect(650, 80, 371, 20));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(620, 60, 10, 401));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        ItemNameLabel = new QLabel(centralwidget);
        ItemNameLabel->setObjectName(QString::fromUtf8("ItemNameLabel"));
        ItemNameLabel->setGeometry(QRect(650, 60, 371, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        ItemNameLabel->setFont(font);
        ItemNameLabel->setAlignment(Qt::AlignCenter);
        ItemCategoryLabel = new QLabel(centralwidget);
        ItemCategoryLabel->setObjectName(QString::fromUtf8("ItemCategoryLabel"));
        ItemCategoryLabel->setGeometry(QRect(650, 110, 191, 20));
        ItemCategoryLabel->setFont(font);
        ItemCategoryLabel->setAlignment(Qt::AlignCenter);
        ItemPurchaseDate = new QDateEdit(centralwidget);
        ItemPurchaseDate->setObjectName(QString::fromUtf8("ItemPurchaseDate"));
        ItemPurchaseDate->setGeometry(QRect(850, 130, 171, 22));
        ItemPurchaseDateLabel = new QLabel(centralwidget);
        ItemPurchaseDateLabel->setObjectName(QString::fromUtf8("ItemPurchaseDateLabel"));
        ItemPurchaseDateLabel->setGeometry(QRect(850, 110, 171, 20));
        ItemPurchaseDateLabel->setFont(font);
        ItemPurchaseDateLabel->setAlignment(Qt::AlignCenter);
        ItemNotes = new QTextEdit(centralwidget);
        ItemNotes->setObjectName(QString::fromUtf8("ItemNotes"));
        ItemNotes->setGeometry(QRect(650, 240, 371, 211));
        ItemNotesLabel = new QLabel(centralwidget);
        ItemNotesLabel->setObjectName(QString::fromUtf8("ItemNotesLabel"));
        ItemNotesLabel->setGeometry(QRect(650, 220, 371, 20));
        ItemNotesLabel->setFont(font);
        ItemNotesLabel->setAlignment(Qt::AlignCenter);
        ItemPurchasePriceLabel = new QLabel(centralwidget);
        ItemPurchasePriceLabel->setObjectName(QString::fromUtf8("ItemPurchasePriceLabel"));
        ItemPurchasePriceLabel->setGeometry(QRect(650, 160, 191, 20));
        ItemPurchasePriceLabel->setFont(font);
        ItemPurchasePriceLabel->setAlignment(Qt::AlignCenter);
        ItemPurchasePrice = new QLineEdit(centralwidget);
        ItemPurchasePrice->setObjectName(QString::fromUtf8("ItemPurchasePrice"));
        ItemPurchasePrice->setGeometry(QRect(650, 180, 191, 20));
        InventoryListLabel = new QLabel(centralwidget);
        InventoryListLabel->setObjectName(QString::fromUtf8("InventoryListLabel"));
        InventoryListLabel->setGeometry(QRect(10, 50, 591, 20));
        InventoryListLabel->setFont(font);
        InventoryListLabel->setAlignment(Qt::AlignCenter);
        ItemCategory = new QComboBox(centralwidget);
        ItemCategory->setObjectName(QString::fromUtf8("ItemCategory"));
        ItemCategory->setGeometry(QRect(650, 130, 191, 22));
        ItemCategory->setEditable(true);
        ItemUsedInLastSixMonths = new QCheckBox(centralwidget);
        ItemUsedInLastSixMonths->setObjectName(QString::fromUtf8("ItemUsedInLastSixMonths"));
        ItemUsedInLastSixMonths->setGeometry(QRect(900, 180, 121, 20));
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(780, 220, 118, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        ItemCountLabel = new QLabel(centralwidget);
        ItemCountLabel->setObjectName(QString::fromUtf8("ItemCountLabel"));
        ItemCountLabel->setGeometry(QRect(850, 160, 41, 20));
        ItemCountLabel->setFont(font);
        ItemCountLabel->setAlignment(Qt::AlignCenter);
        ItemCount = new QSpinBox(centralwidget);
        ItemCount->setObjectName(QString::fromUtf8("ItemCount"));
        ItemCount->setGeometry(QRect(850, 180, 42, 22));
        dbSubmitButton = new QPushButton(centralwidget);
        dbSubmitButton->setObjectName(QString::fromUtf8("dbSubmitButton"));
        dbSubmitButton->setGeometry(QRect(950, 460, 75, 23));
        inventoryList = new QTableWidget(centralwidget);
        if (inventoryList->columnCount() < 6)
            inventoryList->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        inventoryList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        inventoryList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        inventoryList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        inventoryList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        inventoryList->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        inventoryList->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        inventoryList->setObjectName(QString::fromUtf8("inventoryList"));
        inventoryList->setGeometry(QRect(10, 80, 591, 371));
        inventoryList->setRowCount(0);
        inventoryList->setColumnCount(6);
        inventoryList->horizontalHeader()->setMinimumSectionSize(39);
        inventoryList->horizontalHeader()->setDefaultSectionSize(84);
        ViewCategoryComboBox = new QComboBox(centralwidget);
        ViewCategoryComboBox->setObjectName(QString::fromUtf8("ViewCategoryComboBox"));
        ViewCategoryComboBox->setGeometry(QRect(390, 460, 211, 22));
        ViewCategoryComboBox->setMaxVisibleItems(29);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 1031, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1050, 21));
        menufile = new QMenu(menubar);
        menufile->setObjectName(QString::fromUtf8("menufile"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menufile->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionQt5);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_Item->setText(QCoreApplication::translate("MainWindow", "New Item", nullptr));
        actionQt5->setText(QCoreApplication::translate("MainWindow", "Qt5", nullptr));
        ItemNameLabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        ItemCategoryLabel->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        ItemPurchaseDateLabel->setText(QCoreApplication::translate("MainWindow", "Purchase Date", nullptr));
        ItemNotesLabel->setText(QCoreApplication::translate("MainWindow", "Notes", nullptr));
        ItemPurchasePriceLabel->setText(QCoreApplication::translate("MainWindow", "Purchase Price", nullptr));
        InventoryListLabel->setText(QCoreApplication::translate("MainWindow", "Inventory", nullptr));
        ItemCategory->setCurrentText(QString());
        ItemCategory->setPlaceholderText(QCoreApplication::translate("MainWindow", "All", nullptr));
        ItemUsedInLastSixMonths->setText(QCoreApplication::translate("MainWindow", "Used in last 6 months", nullptr));
        ItemCountLabel->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        dbSubmitButton->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        QTableWidgetItem *___qtablewidgetitem = inventoryList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = inventoryList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = inventoryList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Purchased", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = inventoryList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = inventoryList->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = inventoryList->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Used Recently", nullptr));
        ViewCategoryComboBox->setCurrentText(QCoreApplication::translate("MainWindow", "View Category", nullptr));
        ViewCategoryComboBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "View Category", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ownly", nullptr));
        menufile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOW_H
