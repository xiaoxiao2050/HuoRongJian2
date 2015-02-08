
// HuoRongJian2Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "HuoRongJian2.h"
#include "HuoRongJian2Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CHuoRongJian2Dlg 对话框



CHuoRongJian2Dlg::CHuoRongJian2Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CHuoRongJian2Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CHuoRongJian2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_TAB1, m_tab);
}

BEGIN_MESSAGE_MAP(CHuoRongJian2Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, OnSelchangeTab1)
END_MESSAGE_MAP()


// CHuoRongJian2Dlg 消息处理程序

BOOL CHuoRongJian2Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	if (!KernelPage.m_hWnd || !HookScanPage.m_hWnd)  //第一次初始化m_tab 控件和page页的建立
	{
		//初始化m_tab控件
		m_tab.InsertItem(0, L"系统");
		m_tab.InsertItem(1, L"进程");
		m_tab.InsertItem(2, L"启动项");
		m_tab.InsertItem(3, L"内核");
		m_tab.InsertItem(4, L"钩子扫描");
		m_tab.InsertItem(5, L"服务");
		m_tab.InsertItem(6, L"驱动");
		m_tab.InsertItem(7, L"网络");
		m_tab.InsertItem(8, L"文件");
		m_tab.InsertItem(9, L"注册表");

		//初始化建立属性页各页
		SystemPage.Create(IDD_SYSTEMPAGE, GetDlgItem(IDC_TAB1));
		ProcessPage.Create(IDD_PROCESSPAGE, GetDlgItem(IDC_TAB1));
		StartUpPage.Create(IDD_STARTUPPAGE, GetDlgItem(IDC_TAB1));
		KernelPage.Create(IDD_KERNELPAGE, GetDlgItem(IDC_TAB1));
		HookScanPage.Create(IDD_HOOKSCANPAGE, GetDlgItem(IDC_TAB1));
		ServicePage.Create(IDD_SERVICEPAGE, GetDlgItem(IDC_TAB1));
		DriverPage.Create(IDD_DRIVERPAGE, GetDlgItem(IDC_TAB1));
		NetPage.Create(IDD_NETPAGE, GetDlgItem(IDC_TAB1));
		FilePage.Create(IDD_FILEPAGE, GetDlgItem(IDC_TAB1));
		RegistryPage.Create(IDD_REGISTRYPAGE, GetDlgItem(IDC_TAB1));

		//设置页面的位置在m_tab控件范围内
		CRect rs;
		m_tab.GetClientRect(rs);
		rs.top += 20;
		rs.bottom -= 4;
		rs.left += 4;
		rs.right -= 4;

		StartUpPage.MoveWindow(rs);
		KernelPage.MoveWindow(rs);
		HookScanPage.MoveWindow(rs);

		KernelPage.ShowWindow(TRUE);
		m_tab.SetCurSel(1);

	}

	// TODO:  在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CHuoRongJian2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CHuoRongJian2Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CHuoRongJian2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CHuoRongJian2Dlg::OnSelchangeTab1(NMHDR* pNMHDR, LRESULT* pResult)
{
	// TODO: Add your control notification handler code here
	int CurSel;
	CurSel = m_tab.GetCurSel();
	switch (CurSel)
	{
	case 0:
		SystemPage.ShowWindow(FALSE);
		ProcessPage.ShowWindow(FALSE);
		StartUpPage.ShowWindow(FALSE);
		KernelPage.ShowWindow(FALSE);
		HookScanPage.ShowWindow(FALSE);
		ServicePage.ShowWindow(FALSE);
		DriverPage.ShowWindow(FALSE);
		NetPage.ShowWindow(FALSE);
		FilePage.ShowWindow(FALSE);
		RegistryPage.ShowWindow(FALSE);
		SystemPage.SetFocus();
		break;
	case 1:
		SystemPage.ShowWindow(FALSE);
		ProcessPage.ShowWindow(TRUE);
		StartUpPage.ShowWindow(FALSE);
		KernelPage.ShowWindow(FALSE);
		HookScanPage.ShowWindow(FALSE);
		ServicePage.ShowWindow(FALSE);
		DriverPage.ShowWindow(FALSE);
		NetPage.ShowWindow(FALSE);
		FilePage.ShowWindow(FALSE);
		RegistryPage.ShowWindow(FALSE);
		ProcessPage.SetFocus();
		break;
	case 2:
		SystemPage.ShowWindow(FALSE);
		ProcessPage.ShowWindow(FALSE);
		StartUpPage.ShowWindow(TRUE);
		KernelPage.ShowWindow(FALSE);
		HookScanPage.ShowWindow(FALSE);
		ServicePage.ShowWindow(FALSE);
		DriverPage.ShowWindow(FALSE);
		NetPage.ShowWindow(FALSE);
		FilePage.ShowWindow(FALSE);
		RegistryPage.ShowWindow(FALSE);
		StartUpPage.SetFocus();
		break;
	case 3:
		SystemPage.ShowWindow(FALSE);
		ProcessPage.ShowWindow(FALSE);
		StartUpPage.ShowWindow(FALSE);
		KernelPage.ShowWindow(TRUE);
		HookScanPage.ShowWindow(FALSE);
		ServicePage.ShowWindow(FALSE);
		DriverPage.ShowWindow(FALSE);
		NetPage.ShowWindow(FALSE);
		FilePage.ShowWindow(FALSE);
		RegistryPage.ShowWindow(FALSE);
		KernelPage.SetFocus();
		break;
	case 4:
		SystemPage.ShowWindow(FALSE);
		ProcessPage.ShowWindow(FALSE);
		StartUpPage.ShowWindow(FALSE);
		KernelPage.ShowWindow(FALSE);
		HookScanPage.ShowWindow(FALSE);
		ServicePage.ShowWindow(FALSE);
		DriverPage.ShowWindow(FALSE);
		NetPage.ShowWindow(FALSE);
		FilePage.ShowWindow(FALSE);
		RegistryPage.ShowWindow(FALSE);
		HookScanPage.SetFocus();
		break;
	case 5:
		SystemPage.ShowWindow(FALSE);
		ProcessPage.ShowWindow(FALSE);
		StartUpPage.ShowWindow(FALSE);
		KernelPage.ShowWindow(FALSE);
		HookScanPage.ShowWindow(TRUE);
		ServicePage.ShowWindow(FALSE);
		DriverPage.ShowWindow(FALSE);
		NetPage.ShowWindow(FALSE);
		FilePage.ShowWindow(FALSE);
		RegistryPage.ShowWindow(FALSE);
		ServicePage.SetFocus();
		break;
	case 6:
		SystemPage.ShowWindow(FALSE);
		ProcessPage.ShowWindow(FALSE);
		StartUpPage.ShowWindow(FALSE);
		KernelPage.ShowWindow(FALSE);
		HookScanPage.ShowWindow(FALSE);
		ServicePage.ShowWindow(TRUE);
		DriverPage.ShowWindow(FALSE);
		NetPage.ShowWindow(FALSE);
		FilePage.ShowWindow(FALSE);
		RegistryPage.ShowWindow(FALSE);
		DriverPage.SetFocus();
		break;
	case 7:
		SystemPage.ShowWindow(FALSE);
		ProcessPage.ShowWindow(FALSE);
		StartUpPage.ShowWindow(FALSE);
		KernelPage.ShowWindow(FALSE);
		HookScanPage.ShowWindow(FALSE);
		ServicePage.ShowWindow(FALSE);
		DriverPage.ShowWindow(TRUE);
		NetPage.ShowWindow(FALSE);
		FilePage.ShowWindow(FALSE);
		RegistryPage.ShowWindow(FALSE);
		NetPage.SetFocus();
		break;
	case 8:
		SystemPage.ShowWindow(FALSE);
		ProcessPage.ShowWindow(FALSE);
		StartUpPage.ShowWindow(FALSE);
		KernelPage.ShowWindow(FALSE);
		HookScanPage.ShowWindow(FALSE);
		ServicePage.ShowWindow(FALSE);
		DriverPage.ShowWindow(FALSE);
		NetPage.ShowWindow(TRUE);
		FilePage.ShowWindow(FALSE);
		RegistryPage.ShowWindow(FALSE);
		FilePage.SetFocus();
		break;
	case 9:
		SystemPage.ShowWindow(FALSE);
		ProcessPage.ShowWindow(FALSE);
		StartUpPage.ShowWindow(FALSE);
		KernelPage.ShowWindow(FALSE);
		HookScanPage.ShowWindow(FALSE);
		ServicePage.ShowWindow(FALSE);
		DriverPage.ShowWindow(FALSE);
		NetPage.ShowWindow(FALSE);
		FilePage.ShowWindow(TRUE);
		RegistryPage.ShowWindow(FALSE);
		RegistryPage.SetFocus();
		break;
	default:;
	}


	*pResult = 0;
}
