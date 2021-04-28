#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QCoreApplication>
#include "websocketserver.h"


MainWindow::MainWindow(QString target_Dir, QString host_Adress, QString Port, WebSocketServer *server):
   ui(new Ui::MainWindow)
{
    Server = server;
    targetDir = target_Dir;
    hostAdress = host_Adress;
    port = Port;
    ui->setupUi(this);
    button = new QPushButton("Click to get file!", this);
    button->setGeometry(QRect(QPoint(100, 100), QSize(200, 50)));
    connect(button, SIGNAL (clicked()), this, SLOT (StartServer()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::StartServer(){
    qDebug() << "Starting server";
    //thread.start();
    //QCoreApplication::exit(0);
    //emit buttonClicked();
    //server->StartServer(hostAdress, port);
    Server->StartServer(hostAdress, port);
}



