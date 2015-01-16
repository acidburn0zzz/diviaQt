#include "diviaqt.h"
#include <QApplication>
#include <QtWebKit/QWebView>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DiviaQt w;
    w.show();


    return a.exec();
}
