#ifndef DATESELECTIONDIALOG_H
#define DATESELECTIONDIALOG_H

#include <QDialog>

namespace Ui {
class DateSelectionDialog;
}

class DateSelectionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DateSelectionDialog(QWidget *parent = nullptr);
    ~DateSelectionDialog();
private slots:
    void on_NewDialog_accepted();
    void on_calendarWidget_clicked(const QDate &date);

    void on_pushButton_clicked();

private:
    Ui::DateSelectionDialog *ui;
};

#endif // DATESELECTIONDIALOG_H
