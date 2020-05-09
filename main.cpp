#include <iostream>
#include "tests.h"
#include "ui.h"
//#include <crtdbg.h>
#include "gui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //Tests();
    QApplication a(argc, argv);
    Repository* repository = new MemoryRepository();
    Service* service = new Service(repository);
    GUI gui(service);
    gui.show();

    delete repository;
    delete service;
    //_CrtDumpMemoryLeaks();
    return a.exec();
}
