#include "types.h"
#include "PUP.h"
#include "fsFile.h"

using namespace std;

PUP::PUP(const std::string& filepath)
{
	fsFile file(filepath, fsRead);
	PUPHeader pupheader;
	file.Read(&pupheader, sizeof(pupheader));
	/*if (FromBigEndian(pupheader.magic)!= 0x53434555000000)
	{
		return;
	}
	else
	{
		return;
		/*f.seekg(0x30);
		for (int i = 0; i < pupheader.file_count; i++)
		{
			PUPFileEntry file;
			f.read((char *)&file, sizeof(file));
			if (file.entry_id == 0x300)
			{
				return;
			}
			f.seekg(0x30+(0x20 * i));
		}*/
	/*}*/
}


PUP::~PUP()
{
}
