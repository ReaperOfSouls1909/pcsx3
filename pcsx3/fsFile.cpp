#include "fsFile.h"

//basic and probably temporary file handling

fsFile::fsFile()
{
	m_file = nullptr;
}
fsFile::fsFile(const std::string& path, fsOpenMode mode)
{
	Close();
	fopen_s(&m_file, path.c_str(), getOpenMode(mode));
}
bool fsFile::Close()
{
/*	if (!IsOpen() || std::fclose(m_file) != 0) {
		m_file = nullptr;
		return false;
	}

	m_file = nullptr;*/
	return true;
}
fsFile::~fsFile()
{
	//Close();
}

bool fsFile::Write(const void* src, U64 size)
{
	if (!IsOpen() || std::fwrite(src, 1, size, m_file) != size) {
		return false;
	}
	return true;
}

bool fsFile::Read(void* dst, U64 size)
{
	if (!IsOpen() || std::fread(dst, 1, size, m_file) != size) {
		return false;
	}
	return true;
}

bool fsFile::Seek(S64 offset, fsSeekMode mode)
{
	if (!IsOpen() || _fseeki64(m_file, offset, getSeekMode(mode)) != 0) {
		return false;
	}
	return true;
}

U64 fsFile::Tell() const
{
	if (IsOpen()) {
		return _ftelli64(m_file);
	}
	else {
		return -1;
	}
}

bool fsFile::IsOpen() const
{
	return m_file != nullptr;
}

