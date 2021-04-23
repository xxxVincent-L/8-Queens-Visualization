#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPainter>
#include <QPoint>

extern int arr[9];
extern int sum2;

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    void paintEvent(QPaintEvent *event);
    void draw();

private:
    Ui::Dialog *ui;

private slots:
    void on_myButton_clicked();
};

#endif // DIALOG_H
