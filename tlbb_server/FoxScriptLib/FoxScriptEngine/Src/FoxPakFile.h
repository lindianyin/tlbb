//---------------------------------------------------------------------------
// Script Engine by FireFox
// Desc:	Header File
//---------------------------------------------------------------------------
#ifndef FoxPakFile_H
#define FoxPakFile_H
//---------------------------------------------------------------------------
#include "FoxFile.h"


//---------------------------------------------------------------------------
ENGINE_API void g_SetPakFileMode(int nFileMode);
//---------------------------------------------------------------------------

class ENGINE_API FoxPakFile
{
public:
	FoxPakFile();
	~FoxPakFile();
	BOOL		Open(const char* pszFileName);
	void		Close();
	bool		IsFileInPak();
	DWORD		Read(void* pBuffer, unsigned int uSize);
	DWORD		Seek(int nOffset, unsigned int uMethod);
	DWORD		Tell();
	DWORD		Size();
	BOOL		Save(const char* pszFileName);
private:
	FoxFile		m_File;			// 真实文件(不在包中)
};

//---------------------------------------------------------------------------

#endif
