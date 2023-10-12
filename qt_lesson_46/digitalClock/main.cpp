#include <QApplication>
#include <QDebug>
#include "controller.h"
#include "data.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Controller* controller = new Controller();

    controller->run_app();

   // Data* data = new Data();
    //qDebug() << data->get_surname(6);
    //qDebug() << data->get_surname(-11);
    return a.exec();

    if (controller != nullptr){delete controller;}
    //if (data != nullptr){delete data;}

}
