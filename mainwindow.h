#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "sendemail.h"
#include "tabwidgetsettings.h"

#include <QMainWindow>
#include <QStringListModel>

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

    void on_maile_cellClicked(int row, int column);

private:
    Ui::MainWindow *ui;
    SendEmail * sendEmail;
    TabWidgetSettings *tabWidgetSettings;
    QStringListModel *model;
    void dodajNowyMailDoTabeli(QString temat, QString nadawca, QString Data, QString etykieta);
    void zaladujKontaDoTabeli();
};
#endif // MAINWINDOW_H
