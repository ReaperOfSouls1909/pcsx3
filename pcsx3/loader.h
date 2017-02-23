#pragma one

enum FileTypes
{
	FILETYPE_NONE,
	FILETYPE_ELF,
	FILETYPE_SELF,
	FILETYPE_PRX,
	FILETYPE_SPRX,
	FILETYPE_PUP,
	FILETYPE_PKG,
	FILETYPE_PSF
};
bool detectFileType(const std::string& filepath);