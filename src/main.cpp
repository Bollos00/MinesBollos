#include <QApplication>

#include "minesbollos.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MinesBollos* w = new MinesBollos();

    w->show();
    return a.exec();
}