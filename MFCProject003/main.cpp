#include <afxwin.h>
#include <stdio.h>
#include <jpeglib.h>

class CMainWindow : public CFrameWnd {
public:
	CMainWindow() {
		Create(NULL, _T("����������� ���� MFC")); // �������� ����
	}
};

class CMyApp : public CWinApp {
public:
	BOOL InitInstance() {
		CMainWindow* mainWindow = new CMainWindow(); // �������� ���������� ������ ����
		m_pMainWnd = mainWindow;
		m_pMainWnd->ShowWindow(SW_SHOW); // ����������� ����
		m_pMainWnd->UpdateWindow(); // ���������� ����
        struct jpeg_decompress_struct cinfo;
        struct jpeg_error_mgr jerr;

		return TRUE;
	}
};

CMyApp myApp; // ��������� ����������
