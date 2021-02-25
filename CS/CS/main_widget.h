#ifndef MAIN_WIDGET_H
#define MAIN_WIDGET_H

#include <QWidget>

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
};
#endif // MAIN_WIDGET_H
