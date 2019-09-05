#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "filediff.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_filediffButton_clicked();

private:
    Ui::MainWindow *ui;
    int tabnum = 1;
};

#endif // MAINWINDOW_H
