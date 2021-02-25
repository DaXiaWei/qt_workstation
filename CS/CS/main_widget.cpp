#include "main_widget.h"
#include "ui_main_widget.h"

main_Widget::main_Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::main_Widget)
{
    ui->setupUi(this);

    //listen socket //setparent for
    tcpServer = new QTcpServer(this);
    tcpSocket = new QTcpSocket(this);
    tcpServer->listen(QHostAddress::Any,2234);
    connect(tcpServer
            , &QTcpServer::newConnection
            ,this
            ,&main_Widget::listionSocket);
}
void main_Widget::listionSocket()
{
    //quchu socket
    tcpSocket = tcpServer->nextPendingConnection();
    //huoqu clint ip and port
    QString ip = tcpSocket->peerAddress().toString();
    qint16 port = tcpSocket->peerPort();
    QString temp = QString("[%1:%2]: connect successful").arg(ip).arg(port);
    ui->textEditShow->setText(temp);
}
main_Widget::~main_Widget()
{
    delete ui;
}

