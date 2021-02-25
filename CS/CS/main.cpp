#include "main_widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    main_Widget w;
    w.show();
    return a.exec();
}
