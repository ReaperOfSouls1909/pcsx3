#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets/qfiledialog.h>
#include <qdir.h>
#include "ui_pcsx3.h"

class pcsx3 : public QMainWindow
{
    Q_OBJECT

public:
    pcsx3(QWidget *parent = Q_NULLPTR);

private:
    Ui::pcsx3Class ui;

public slots:
	void openELF();
};
