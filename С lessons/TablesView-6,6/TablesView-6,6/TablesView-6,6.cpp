// TablesView-6,6.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "TablesView-6,6.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ������������ ������ ����������

CWinApp theApp;

using namespace std;

int main()
{
    int nRetCode = 0;

    HMODULE hModule = ::GetModuleHandle(nullptr);

    if (hModule != nullptr)
    {
        // ���������������� MFC, � ����� ������ � ��������� �� ������� ��� ����
        if (!AfxWinInit(hModule, nullptr, ::GetCommandLine(), 0))
        {
            // TODO: �������� ��� ������ �������������� ����� ������������
            wprintf(L"����������� ������: ���� ��� ������������� MFC\n");
            nRetCode = 1;
        }
        else
        {
            // TODO: �������� ���� ��� ��� ����������.
        }
    }
    else
    {
        // TODO: �������� ��� ������ �������������� ����� ������������
        wprintf(L"����������� ������: ��������� ���������� GetModuleHandle\n");
        nRetCode = 1;
    }

    return nRetCode;
}
