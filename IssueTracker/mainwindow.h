#pragma once

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QMessageBox>
#include <QtSql>
#include <iostream>
#include <QtSql/QSqlQuery>

using namespace std;


class MySQL_DB
{
    public:

        string ipadresse;

        //set db name
        string databasename;

        //set username and password
        string username;
        string password;
        int port;

};


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QSqlDatabase data_b = QSqlDatabase::addDatabase("QMYSQL");

    ~MainWindow();

private slots:

    void on_pushButton_login_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H



class Permissions
{
    public:
        int id;
        string name;
        bool is_write;
        bool is_read;
        bool is_delete;
        bool is_set_rights;

        Permissions(): id(-1){}

    bool dataIsNotSet();
    void printData();

};
