#include "scannerwindow.h"
#include <QApplication>
#include <QString>

#include <QIcon>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ScannerWindow scannerMainWindow;
    scannerMainWindow.setWindowTitle("3D Scanner User Interface");
    scannerMainWindow.setWindowIcon(QIcon(":/Icons/Icon_3D.ico"));
    scannerMainWindow.resize(650,450);
    scannerMainWindow.move(700,20);
    scannerMainWindow.show();

    return a.exec();
}
