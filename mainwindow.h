#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "sendemail.h"
#include "tabwidgetsettings.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_actionObs_uga_kont_mailowych_triggered();

private:
    Ui::MainWindow *ui;
    SendEmail * sendEmail;
    TabWidgetSettings *tabWidgetSettings;
    void dodajNowyMailDoTabeli(QString temat, QString nadawca, QString Data, QString etykieta);
};
#endif // MAINWINDOW_H
