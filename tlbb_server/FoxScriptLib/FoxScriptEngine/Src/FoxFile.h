//---------------------------------------------------------------------------
// Script Engine by FireFox
// Desc:	Header File
//---------------------------------------------------------------------------
#ifndef FoxFile_H
#define FoxFile_H
//---------------------------------------------------------------------------
#define SEEK_ERROR		0xFFFFFFFF
//---------------------------------------------------------------------------
#ifndef __linux
class ENGINE_API FoxFile
#else
class FoxFile
#endif
{
private:
//#ifndef __linux
//	HANDLE		m_hFile;	// File Handle
//#else
	FILE *		m_hFile;	// File Handle
//#endif
	DWORD		m_dwLen;	// File Size
	DWORD		m_dwPos;	// File Pointer
public:
	FoxFile();
	~FoxFile();
	BOOL		Open(LPSTR FileName);
	BOOL		Create(LPSTR FileName);
	BOOL		Append(LPSTR FileName);
	void		Close();
	DWORD		Read(LPVOID lpBuffer, DWORD dwReadBytes);
	DWORD		Write(LPVOID lpBuffer, DWORD dwWriteBytes);
	DWORD		Seek(LONG lDistance, DWORD dwMoveMethod);
	DWORD		Tell();
	DWORD		Size();
};
//---------------------------------------------------------------------------
#endif
