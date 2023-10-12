#include <QDebug>
#include "controller.h"

Controller::Controller(QObject *parent) : QObject(parent)
{
    mainwindow = new MainWindow();
    data = new Data();


    id_timer_sec = startTimer(1000);

    connect(this, &Controller::signalOneSec, mainwindow, &MainWindow::update_sec);
    connect(this, &Controller::signalOneSec, this, &Controller::increment_index_surname);
    connect(this, &Controller::signalOneSec, this, &Controller::get_data_and_show);

}

Controller::~Controller()
{
    if (mainwindow != nullptr){delete mainwindow;}
    if (data != nullptr){delete data;}
}

void Controller::run_app()
{
    mainwindow->show();
}

void Controller::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == id_timer_sec)
    {
        emit signalOneSec();


    }
}

void Controller::increment_index_surname()
{
    ++m_index_surname;
    if (m_index_surname >= data->get_size_list_surname())
    {
        m_index_surname = 0;
    }
}

void Controller::get_data_and_show()
{
    QString tmp_surname = data->get_surname(m_index_surname);
    mainwindow->show_surname(tmp_surname);
}

