#include "mainwindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(800, 600);
    setWindowTitle("Форма регистрации");
    setWindowIcon(QIcon(":/images/iconka.jpg"));
    QLabel* label1 = new QLabel("<b> Форма регистрации </b>", this);

    label1 -> setTextFormat(Qt::RichText);
    label1 -> setGeometry(100, 120, 600, 15);
    label1 -> setAlignment(Qt::AlignCenter);
}

MainWindow::~MainWindow() = default;
