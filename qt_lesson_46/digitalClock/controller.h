#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QTimerEvent>
#include "data.h"
#include "mainwindow.h"


class Controller : public QObject
{
    Q_OBJECT
public:
    explicit Controller(QObject *parent = nullptr);
    ~Controller();

    MainWindow* mainwindow{nullptr};
    Data* data{nullptr};


    void run_app();

    int m_index_surname{0};
    int id_timer_sec{-1};

    void timerEvent(QTimerEvent* event);

signals:
    void signalOneSec();

public slots:
    void increment_index_surname();
    void get_data_and_show();
};

#endif // CONTROLLER_H
