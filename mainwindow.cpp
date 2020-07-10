#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QCalendarWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Add items to Combo Box

void MainWindow::on_buttonCalculate_clicked()
{

    QString qstrNumber1 = ui->lineEdit->text();
    QString qstrNumber2 = ui->lineEdit_2->text();
    QString qstrOperator = ui->operator_2->currentText();

    double n1 = qstrNumber1.toDouble();
    double n2 = qstrNumber2.toDouble();
    double result = 0.0;

    if(qstrOperator == "+"){
        result = n2 + n1;
    }
    else if(qstrOperator == "-"){
        result = n2 - n1;
    }
    else if(qstrOperator == "*"){
        result = n2 * n1;
    }
    else if(qstrOperator == "/"){
        result = n2 / n1;
    }

    QString qstrResult = QString::number(result);
    ui->labelAnswer->setText(qstrResult);
}

void MainWindow::on_pushButton_clicked()
{
    DateSelectionDialog* dialog = new DateSelectionDialog(this);
    dialog->exec();
}
