#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


bool Permissions::dataIsNotSet()
{
    if(this->id==-1){
        return true;
    }
    else
    {
        return false;
    }
}


void Permissions::printData()
{
    if(dataIsNotSet())
    {
        cout << "No data to print" << endl;
    }
    else
    {
        cout<< "Id: "<< id << endl;
        cout<< "name: "<< name << endl;
        cout<< "is_write: "<< is_write << endl;
        cout<< "is_read: "<< is_read << endl;
        cout<< "is_delete: "<< is_delete << endl;
        cout<< "is_set_rights: "<< is_set_rights << endl << endl;
    }
}
