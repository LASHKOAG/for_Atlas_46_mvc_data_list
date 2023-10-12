#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::getCount_sec() const
{
    return m_count_sec;
}

void MainWindow::setCount_sec(int count_sec)
{
    if (count_sec > 59){count_sec = 0;}
    m_count_sec = count_sec;
}

void MainWindow::show_surname(QString surname)
{
    ui->textEdit->setText(surname);
}

void MainWindow::update_sec()
{
    int tmp_sec = getCount_sec();
    ++tmp_sec;
    setCount_sec(tmp_sec);

    ui->lblSecounds->setText(QString::number(getCount_sec()));
}

