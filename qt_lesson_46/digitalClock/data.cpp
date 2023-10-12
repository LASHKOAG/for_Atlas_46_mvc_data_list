#include "data.h"

Data::Data(QObject *parent) : QObject(parent)
{
        m_list_surmame.append("Petrov");
        m_list_surmame.append("Sidorov");
        m_list_surmame.append("Ivanov");
        m_list_surmame.append("Petrov2");
        m_list_surmame.append("Sidorov2");
        m_list_surmame.append("Ivanov2");
}

QString Data::get_surname(int index)
{
    if (index >= m_list_surmame.size() || index < 0)
    {
        return "None";
    }
    return m_list_surmame[index];
}

int Data::get_size_list_surname()
{
    return m_list_surmame.size();
}
