#include "dialog.h"
#include "ui_dialog.h"
#include <QDialog>
#include <QCalendarWidget>

DateSelectionDialog::DateSelectionDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DateSelectionDialog)
{
    ui->setupUi(this);
}

DateSelectionDialog::~DateSelectionDialog()
{
    delete ui;
}

void DateSelectionDialog::on_NewDialog_accepted()
{

}
