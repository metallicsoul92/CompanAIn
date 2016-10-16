#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "AI/AICore.h"
#include "utils/CTriple.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void inputReceived();

private slots:
    void on_actionExit_triggered();

    void on_lineEdit_returnPressed();

private:
    Ui::MainWindow *ui;
    clim::AICore *m_core;
};

#endif // MAINWINDOW_H
