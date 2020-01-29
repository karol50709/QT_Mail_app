#include "mainwindow.h"
#include "sendemail.h"
#include "tabwidgetsettings.h"
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
    sendEmail = new SendEmail();
    sendEmail->show();

}

void MainWindow::on_actionObs_uga_kont_mailowych_triggered()
{
    tabWidgetSettings = new TabWidgetSettings();
    tabWidgetSettings->show();
}
