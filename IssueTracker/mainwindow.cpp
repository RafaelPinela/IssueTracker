#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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



void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_user->text() ;
    QString password = ui->lineEdit_password->text() ;
    QString ipadresse = ui->lineEdit_ip->text() ;
    QString databasename = ui->lineEdit_database->text() ;

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

    //set hostname
    db.setHostName(ipadresse);

    //set db name
    db.setDatabaseName(databasename);

    //set username and password
    db.setUserName(username);
    db.setPassword(password);
    db.setPort(3306);

    if(db.open())
    {
        QMessageBox::information(this, "Connection", "Database connected successfully");
        db.close();
    }
    else
    {
        QMessageBox::information(this, "Not connected", "Database is not connected");
    }

}




/*
   QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

   //set hostname
   db.setHostName("");

   //set db name
   db.setDatabaseName("");

   //set username and password
   db.setUserName("");
   db.setPassword("");

   */
