#ifndef TABWIDGETSETTINGS_H
#define TABWIDGETSETTINGS_H

#include <QTabWidget>

namespace Ui {
class TabWidgetSettings;
}

class TabWidgetSettings : public QTabWidget
{
    Q_OBJECT

public:
    explicit TabWidgetSettings(QWidget *parent = nullptr);
    ~TabWidgetSettings();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

private:
    Ui::TabWidgetSettings *ui;
    void loadSettings();
};

#endif // TABWIDGETSETTINGS_H
