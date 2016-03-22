#include <QApplication>
#include "forwardkinematics.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ForwardKinematics w;
    w.show();
    return a.exec();
}


