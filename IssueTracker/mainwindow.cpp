#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_clicked()
{

   QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

   //set hostname
   db.setHostName("");

   //set db name
   db.setDatabaseName("");

   //set username and password
   db.setUserName("");
   db.setPassword("");
}
