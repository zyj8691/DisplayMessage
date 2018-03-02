#include "displaymessage.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DisplayMessage w;
    w.show();
    return a.exec();
}
