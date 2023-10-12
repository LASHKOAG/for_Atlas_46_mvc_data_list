#ifndef DATA_H
#define DATA_H

#include <QObject>
//#include <list>
//#include <algorithm>

class Data : public QObject
{
    Q_OBJECT
public:
    explicit Data(QObject *parent = nullptr);
    QString get_surname(int index);
    int get_size_list_surname();

private:
    QList <QString> m_list_surmame;

    //std::list

    //boost::list

signals:

public slots:
};

#endif // DATA_H
