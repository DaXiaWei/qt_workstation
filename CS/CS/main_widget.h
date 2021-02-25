#ifndef MAIN_WIDGET_H
#define MAIN_WIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class main_Widget; }
QT_END_NAMESPACE

class main_Widget : public QWidget
{
    Q_OBJECT

public:
    main_Widget(QWidget *parent = nullptr);
    ~main_Widget();

private:
    Ui::main_Widget *ui;
    QTcpServer *tcpServer;//use for
    QTcpSocket *tcpSocket;
    void listionSocket();
};
#endif // MAIN_WIDGET_H
