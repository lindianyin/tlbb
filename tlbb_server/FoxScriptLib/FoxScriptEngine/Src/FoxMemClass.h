//---------------------------------------------------------------------------
// Script Engine by FireFox
// Desc:	Header File
//---------------------------------------------------------------------------
#ifndef FoxMemClass_H
#define FoxMemClass_H
//---------------------------------------------------------------------------
class ENGINE_API FoxMemClass
{
private:
	PVOID		m_lpMemPtr;
	DWORD		m_lpMemLen;
public:
	FoxMemClass();
	~FoxMemClass();
	PVOID		Alloc(DWORD dwSize);
	void		Free();
	void		Zero();
	void		Fill(BYTE byFill);
	void		Fill(WORD wFill);
	void		Fill(DWORD dwFill);
	PVOID		GetMemPtr() { return m_lpMemPtr; };
	DWORD		GetMemLen() { return m_lpMemLen; };
};
//---------------------------------------------------------------------------
#endif
