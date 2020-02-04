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
    QSqlQuery query1 ;
    QString sQuery1 = "Insert into people (id,firstname,lastname) values (1, :first, :last)";
    query1.prepare(sQuery1);
    query1.bindValue(":first","Jan");
    query1.bindValue(":last","kowalski");
    query1.exec();

    QSqlQuery query2;
    if(query2.exec("select * from people")){
        while(query2.next()){
            qDebug()<<query2.value("firstname").toString();
            qDebug()<<query2.value("lastname").toString();
        }
    }
    else {
        qDebug()<<db.lastError().text();
    }
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //v.exec();
    return a.exec();
}
