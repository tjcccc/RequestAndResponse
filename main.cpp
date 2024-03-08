#include "requestandresponse.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RequestAndResponse w;
    w.show();
    return a.exec();
}
