#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_pcsx3.h"

class pcsx3 : public QMainWindow
{
    Q_OBJECT

public:
    pcsx3(QWidget *parent = Q_NULLPTR);

private:
    Ui::pcsx3Class ui;
};
