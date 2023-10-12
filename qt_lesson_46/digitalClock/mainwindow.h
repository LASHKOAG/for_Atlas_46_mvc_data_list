#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



    int getCount_sec() const;
    void setCount_sec(int count_sec);
    void show_surname(QString surname);

private:
    Ui::MainWindow *ui;
    int m_count_sec{0};

public slots:
    void update_sec();
};

#endif // MAINWINDOW_H
