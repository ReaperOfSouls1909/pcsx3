#include "pcsx3.h"
#include "loader.h"
pcsx3::pcsx3(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}
void pcsx3::openELF()
{
	std::string file (QFileDialog::getOpenFileName(this, tr("Open ELF"), QDir::currentPath(), tr("ELF Files (*.elf)")).toStdString());
	detectFileType(file);
}
