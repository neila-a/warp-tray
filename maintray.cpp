#include "maintray.h"

MainTray::MainTray(QWidget *parent)
{
    connect(this,&MainTray::activated,this,&MainTray::on_activatedSysTrayIcon);
}
MainTray::~MainTray()
{
}

void MainTray::on_activatedSysTrayIcon(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason) {
    case MainTray::Trigger:
        system("warp-cli connect");
        this->showMessage("warp-tray", "connect");
        break;
    case MainTray::Context:
        system("warp-cli disconnect");
        this->showMessage("warp-tray", "disconnect");
        break;
    default:
        break;
    }
}
