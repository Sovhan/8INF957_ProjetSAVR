#include "pageaccueil.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("SAVR");

    PageAccueil w;
    w.show();

    return a.exec();
}
