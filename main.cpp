#include "mainwindow.h"

#include <QApplication>
#include <QtSql>
#include <QDebug>

int main(int argc, char *argv[])
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/tmp/database.db");
    bool ok = db.open();
    QSqlQuery query;
    QString sQuery = "Create table konf_mail (id int, mail_smpt varchar(64), mail_login varchar(64), mail_haslo varchar(64), mail_wysylajacy varchar(64), port int, ssl int)";;
    //QString sQuery = "Create table maile (mail_id NUMBER(12,0) Constraint mail_pk PRIMARY KEY, mail_smpt Varchar(50), mail_ssl Number(1), mail_login varchar(50), mail_haslo varchar(50), mail_wysylajacy varchar(50)";
    query.prepare(sQuery);
    query.exec(sQuery);
    if(ok){
        qDebug("OK");
    }
    else {
        qDebug()<< db.lastError().text();
    }
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
