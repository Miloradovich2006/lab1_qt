#include "mainwindow.h"
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QSpinBox>
#include <QDoubleSpinBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(480, 300);
    setWindowTitle("Форма регистрации");
    setWindowIcon(QIcon(":/images/iconka.jpg"));

    QLabel *label1 = new QLabel("<b> Форма регистрации </b>", this);
    label1->setTextFormat(Qt::RichText);
    label1->setGeometry(10, 10, 460, 20);
    label1->setAlignment(Qt::AlignCenter);

    QLabel *label2 = new QLabel("Пожалуйста, введите ваше ФИО:", this);
    label2->setGeometry(10, 40, 460, 20);

    QLineEdit* edit1 = new QLineEdit(this);
    edit1->setGeometry(10, 62, 460, 26);
    edit1->setPlaceholderText("Фамилия");

    QPalette pal = edit1->palette();
    pal.setColor(QPalette::PlaceholderText, Qt::gray);
    edit1->setPalette(pal);

    QLineEdit* edit2 = new QLineEdit(this);
    edit2->setGeometry(10, 94, 460, 26);
    edit2->setPlaceholderText("Имя");
    edit2->setPalette(pal);

    QLineEdit* edit3 = new QLineEdit(this);
    edit3->setGeometry(10, 126, 460, 26);
    edit3->setPlaceholderText("Отчество");
    edit3->setPalette(pal);

    QLabel *label3 = new QLabel("Пожалуйста, введите вашу дату рождения:", this);
    label3->setGeometry(10, 160, 460, 20);

    QSpinBox* spinbox1 = new QSpinBox(this);
    spinbox1->setGeometry(145, 184, 50, 28);
    spinbox1->setRange(1, 31);

    QSpinBox* spinbox2 = new QSpinBox(this);
    spinbox2->setGeometry(205, 184, 50, 28);
    spinbox2->setRange(1, 12);

    QSpinBox* spinbox3 = new QSpinBox(this);
    spinbox3->setGeometry(265, 184, 70, 28);
    spinbox3->setRange(1900, 2026);

    QPushButton* button1 = new QPushButton("Готово", this);
    button1->setGeometry(190, 270, 100, 30);

    QLabel *label4 = new QLabel("Пожалуйста, введите ваш рост (в метрах):", this);
    label4->setGeometry(10, 220, 460, 20);

    QDoubleSpinBox* spinbox4 = new QDoubleSpinBox(this);
    spinbox4->setGeometry(10, 250, 70, 30);
    spinbox4->setRange(0.00, 3.00);
    spinbox4->setDecimals(2);
    spinbox4->setSingleStep(0.01);
}

MainWindow::~MainWindow() = default;