#include "pageaccueil.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PageAccueil w;
    w.show();

    return a.exec();
}
