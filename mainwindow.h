#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


struct MainWindowData;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    MainWindowData* d;


};

#endif // MAINWINDOW_H
