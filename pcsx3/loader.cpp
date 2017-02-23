#include "common.h"
#include "fsFile.h"
bool detectFileType(const std::string& filepath)
{
	if (filepath.size() == 0)//no file loaded
	{
		return false;
	}
	fsFile file(filepath, fsRead);
	U32 magic;
	file.Read(&magic, sizeof(magic));
	file.Close();
	
	return true;

}