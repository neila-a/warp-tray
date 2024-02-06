#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QSystemTrayIcon> //托盘使用的头文件

QT_BEGIN_NAMESPACE
namespace Ui { class MainTray; }
QT_END_NAMESPACE

class MainTray : public QSystemTrayIcon
{
    Q_OBJECT

public:
    MainTray(QWidget *parent);
    ~MainTray();

private slots:
    void on_activatedSysTrayIcon(MainTray::ActivationReason reason);

private:
    Ui::MainTray *ui;
};

#endif // MAINWINDOW_H
