#include <iostream>
#include "tests.h"
#include "ui.h"
//#include <crtdbg.h>
#include "gui.h"
#include <memory>
#include <QApplication>
using namespace std;

int main(int argc, char *argv[])
{
    //Tests();
    QApplication a(argc, argv);
    FileRepository repository("in.in");
    //MemoryRepository repository;
    Service service(&repository);
    GUI gui(&service);
    gui.show();

    //_CrtDumpMemoryLeaks();
    return a.exec();
}
