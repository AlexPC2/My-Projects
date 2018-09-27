// TablesView-6,6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "TablesView-6,6.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Единственный объект приложения

CWinApp theApp;

using namespace std;

int main()
{
    int nRetCode = 0;

    HMODULE hModule = ::GetModuleHandle(nullptr);

    if (hModule != nullptr)
    {
        // инициализировать MFC, а также печать и сообщения об ошибках про сбое
        if (!AfxWinInit(hModule, nullptr, ::GetCommandLine(), 0))
        {
            // TODO: измените код ошибки соответственно своим потребностям
            wprintf(L"Критическая ошибка: сбой при инициализации MFC\n");
            nRetCode = 1;
        }
        else
        {
            // TODO: Вставьте сюда код для приложения.
        }
    }
    else
    {
        // TODO: Измените код ошибки соответственно своим потребностям
        wprintf(L"Критическая ошибка: неудачное завершение GetModuleHandle\n");
        nRetCode = 1;
    }

    return nRetCode;
}
