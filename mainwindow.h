#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QtLib/qtlibcreate.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QtLibCreate* m_QtLib;
private slots:
    void on_pushButton_add_clicked();
    void on_pushButton_sub_clicked();
    void on_pushButton_mul_clicked();
};

#endif // MAINWINDOW_H
