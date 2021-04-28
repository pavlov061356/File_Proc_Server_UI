#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "QtWebSockets/qwebsocketserver.h"
#include "QtWebSockets/qwebsocket.h"
#include "websocketserver.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QString target_Dir, QString host_Adress, QString Port, WebSocketServer *server);
    ~MainWindow();
private slots:
    void StartServer();

private:


    Ui::MainWindow *ui;
    QPushButton *button;
    QString targetDir;
    QString hostAdress;
    QString port;
    WebSocketServer *Server;

};
#endif // MAINWINDOW_H
