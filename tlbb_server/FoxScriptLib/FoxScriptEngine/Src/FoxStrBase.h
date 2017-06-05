//---------------------------------------------------------------------------
// Script Engine by FireFox
// Desc:	Header File
//---------------------------------------------------------------------------
#ifndef FoxStrBase_H
#define FoxStrBase_H
//---------------------------------------------------------------------------
ENGINE_API	int		g_StrLen(LPCSTR lpStr);
ENGINE_API	LPSTR	g_StrEnd(LPCSTR lpStr);
ENGINE_API	void	g_StrCpy(LPSTR lpDest, LPCSTR lpSrc);
ENGINE_API	void	g_StrCpyLen(LPSTR lpDest, LPCSTR lpSrc, int nMaxLen);
ENGINE_API	void	g_StrCat(LPSTR lpDest, LPCSTR lpSrc);
ENGINE_API	void	g_StrCatLen(LPSTR lpDest, LPCSTR lpSrc, int nMaxLen);
ENGINE_API	BOOL	g_StrCmp(LPCSTR lpDest, LPCSTR lpSrc);
ENGINE_API	BOOL	g_StrCmpLen(LPCSTR lpDest, LPCSTR lpSrc, int nMaxLen);
ENGINE_API	void	g_StrUpper(LPSTR lpDest);
ENGINE_API	void	g_StrLower(LPSTR lpDest);
ENGINE_API	void	g_StrRep(LPSTR lpDest, LPSTR lpSrc, LPSTR lpRep);

//---------------------------------------------------------------------------
#endif
