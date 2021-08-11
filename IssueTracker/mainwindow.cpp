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

    if(data_b.open())
    {
        this->data_b.close();
        cout<<"ZU"<<endl;
    }
}



void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_user->text() ;
    QString password = ui->lineEdit_password->text() ;
    QString ipadresse = ui->lineEdit_ip->text() ;
    QString databasename = ui->lineEdit_database->text() ;

    //set hostname
    data_b.setHostName(ipadresse);

    //set db name
    data_b.setDatabaseName(databasename);

    //set username and password
    data_b.setUserName(username);
    data_b.setPassword(password);
    data_b.setPort(3306);

    if(data_b.open())
    {
        QMessageBox::information(this, "Connection", "Database connected successfully");
        ui->groupBox_2->setEnabled(true);
        ui->groupBox->setEnabled(false);
    }
    else
    {
        QMessageBox::information(this, "Not connected", "Database is not connected");
    }

}


void MainWindow::on_pushButton_clicked()
{
    if(data_b.open())
    {
        QMessageBox::information(this, "Connection", "Database connected successfully");
    }
    else
    {
        QMessageBox::information(this, "Not connected", "Database is not connected");
    }
}

