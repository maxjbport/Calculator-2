#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui { class DateSelectionDialog; }

class DateSelectionDialog : public QDialog
{
    Q_OBJECT

public:
    DateSelectionDialog(QWidget *parent = nullptr);
    ~DateSelectionDialog();

private slots:
    void on_NewDialog_accepted();

private:
    Ui::DateSelectionDialog *ui;
};

#endif // DIALOG_H
