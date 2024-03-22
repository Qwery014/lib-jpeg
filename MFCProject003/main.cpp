#include <afxwin.h>
#include <stdio.h>
#include <jpeglib.h>

class CMainWindow : public CFrameWnd {
public:
	CMainWindow() {
		Create(NULL, _T("Минимальное окно MFC")); // Создание окна
	}
};

class CMyApp : public CWinApp {
public:
	BOOL InitInstance() {
		CMainWindow* mainWindow = new CMainWindow(); // Создание экземпляра класса окна
		m_pMainWnd = mainWindow;
		m_pMainWnd->ShowWindow(SW_SHOW); // Отображение окна
		m_pMainWnd->UpdateWindow(); // Обновление окна
        struct jpeg_decompress_struct cinfo;
        struct jpeg_error_mgr jerr;

		return TRUE;
	}
};

CMyApp myApp; // Экземпляр приложения
