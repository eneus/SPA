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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>

QT_BEGIN_NAMESPACE

class QLabel;

namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE

class Console;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
