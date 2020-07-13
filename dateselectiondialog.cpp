#include "dateselectiondialog.h"
#include "ui_dateselectiondialog.h"
#include <QCalendarWidget>
#include <string>

DateSelectionDialog::DateSelectionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DateSelectionDialog)
{
    ui->setupUi(this);
}

DateSelectionDialog::~DateSelectionDialog()
{
    delete ui;
}
void DateSelectionDialog::on_NewDialog_accepted(){

}

void DateSelectionDialog::on_calendarWidget_clicked(const QDate &date)
{
    QDate::currentDate();
    QString setButtonDay = QString::number(date.day());
    QString setButtonMonth = QString::number(date.month());
    QString setButtonYear = QString::number(date.year());
    ui->pushButton->setText("Select Date "+ setButtonDay+ "/"+ setButtonMonth+"/"+setButtonYear);
}

void DateSelectionDialog::on_pushButton_clicked()
{

}
