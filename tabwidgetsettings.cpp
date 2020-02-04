#include "login.h"
#include "tabwidgetsettings.h"
#include "ui_tabwidgetsettings.h"
#include "stale.h"
#include <QSettings>
#include <QtSql>
#include <QDebug>


TabWidgetSettings::TabWidgetSettings(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::TabWidgetSettings)
{
    ui->setupUi(this);
    QList<Login> loginy;
    QSettings settings;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/tmp/database.db");
    bool ok = db.open();
    if(ok){
        qDebug("OK");
    }
    else {
        qDebug()<< db.lastError().text();
    }
    on_pushButton_5_clicked();
}

TabWidgetSettings::~TabWidgetSettings()
{
    delete ui;
}

void TabWidgetSettings::on_pushButton_4_clicked()
{
    QSqlQuery query1 ;
    QString sQuery1 = "Insert into konf_mail (id,mail_smpt,mail_login,mail_haslo,mail_wysylajacy,port,ssl) values (:id, :mail_smpt, :mail_login, :mail_haslo, :mail_wysylajacy, :port, :ssl)";
    query1.prepare(sQuery1);
    query1.bindValue(":id",1);
    query1.bindValue(":mail_smpt",ui->host->text());
    query1.bindValue(":mail_login",ui->login->text());
    query1.bindValue(":mail_haslo",ui->haslo->text());
    query1.bindValue(":mail_wysylajacy",ui->wysylajacy->text());
    query1.bindValue(":port",ui->port->value());
    query1.bindValue(":ssl",1);

    query1.exec();
    on_pushButton_3_clicked();
}

void TabWidgetSettings::on_pushButton_3_clicked()
{
    ui->host->setText("");
    ui->haslo->setText("");
    ui->login->setText("");
    ui->port->setValue(0);
    ui->wysylajacy->setText("");
    ui->czySSL->setChecked(false);
}

void TabWidgetSettings::on_pushButton_2_clicked()
{
    QMetaObject::invokeMethod( this, "close", Qt::QueuedConnection );
}

void TabWidgetSettings::loadSettings()
{
 //QSettings settings(new Stale()., QSettings::NativeFormat);
}

void TabWidgetSettings::on_pushButton_5_clicked()
{
    QSqlQuery query1 ;
    query1.exec("select * from konf_mail");
    while (query1.next()) {
        //QModelIndex index = model->index(model->rowCount()-1)
        ui->listWidget->addItem(query1.value("mail_login").toString());
        //ui->listWidget->addItem(query1.value("mail_login").toString());
}
}
