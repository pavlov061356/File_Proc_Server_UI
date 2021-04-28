#include "mainwindow.h"
#include "websocketserver.h"
#include <QApplication>
#include <QObject>
#include <QThread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString targetDir = argv[1];
    QString host = argv[2];
    QString port = argv[3];
    WebSocketServer server(targetDir, host , port);
    //QThread* thread_server = new QThread;
    //server.moveToThread(thread_server);
    MainWindow w(targetDir, host, port, &server);
    //QThread* thread_window = new QThread;
    //w.moveToThread(thread_window);
    //connect(thread_window, SIGNAL (clicked()), thread_server, SLOT ([=](){server::StartServer(host, port)}));
    w.show();
    //server.StartServer(host, port);

    //w.buttonClicked();

    return a.exec();
}
