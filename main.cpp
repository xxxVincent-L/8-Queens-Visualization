//#include "dialog.h"
//#include <QApplication>

//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    Dialog w;
//    w.setWindowTitle("8-Queens By Vincent");
//    w.show();

//    return a.exec();
//}
#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.setWindowTitle("8-Queens By Vincent");
    w.show();

    return a.exec();
}
