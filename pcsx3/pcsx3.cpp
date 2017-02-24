#include "pcsx3.h"
#include "loader.h"
#include "fileTypes\PUP.h"
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
void pcsx3::installFW()
{
	std::string file(QFileDialog::getOpenFileName(this, tr("Open FW Update Files"), QDir::currentPath(), tr("PUP File (*.PUP)")).toStdString());
	if (detectFileType(file) == FILETYPE_PUP)
	{
		PUP pup(file);
	}
}
