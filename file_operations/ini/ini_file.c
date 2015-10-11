#include <windows.h>
#include <stdio.h>



int main()
{
    int va = GetPrivateProfileInt("section","key",0,".//config.ini");
    printf("%d",va);
    return 0;
}




//UINT WINAPI GetPrivateProfileInt(
//  _In_ LPCTSTR lpAppName,
//  _In_ LPCTSTR lpKeyName,
//  _In_ INT     nDefault,
//  _In_ LPCTSTR lpFileName
//);
