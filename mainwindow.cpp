/****************************************************************************
**
** Copyright (C) 2018 Ivan Fesyuk
** Contact: https://eneus.github.io/
** https://github.com/eneus/
**
**
** $QT_BEGIN_LICENSE:BSD$
** MIT License Usage
**
****************************************************************************/

#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QIntValidator>
#include <QLineEdit>
#include <QSerialPortInfo>

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
