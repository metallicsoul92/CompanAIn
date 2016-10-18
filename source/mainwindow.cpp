#include "../include/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), m_core(new clim::AICore())
{
    ui->setupUi(this);
    connect(this->m_core,SIGNAL(SendOutput(this->m_core->getOutputString())),this,SLOT(outputData(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_lineEdit_returnPressed()
{
    this->m_core->setInputString(ui->lineEdit->text());
    ui->plainTextEdit->appendPlainText(QString("User->") + ui->lineEdit->text());
    ui->lineEdit->clear();
    emit inputReceived();
}

void MainWindow::outputData(QString data)
{
    ui->plainTextEdit->appendPlainText(QString("Computer->")+ data);
}
