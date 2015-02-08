
// HuoRongJian2Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "HuoRongJian2.h"
#include "HuoRongJian2Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
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


// CHuoRongJian2Dlg �Ի���



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


// CHuoRongJian2Dlg ��Ϣ�������

BOOL CHuoRongJian2Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	if (!KernelPage.m_hWnd || !HookScanPage.m_hWnd)  //��һ�γ�ʼ��m_tab �ؼ���pageҳ�Ľ���
	{
		//��ʼ��m_tab�ؼ�
		m_tab.InsertItem(0, L"ϵͳ");
		m_tab.InsertItem(1, L"����");
		m_tab.InsertItem(2, L"������");
		m_tab.InsertItem(3, L"�ں�");
		m_tab.InsertItem(4, L"����ɨ��");
		m_tab.InsertItem(5, L"����");
		m_tab.InsertItem(6, L"����");
		m_tab.InsertItem(7, L"����");
		m_tab.InsertItem(8, L"�ļ�");
		m_tab.InsertItem(9, L"ע���");

		//��ʼ����������ҳ��ҳ
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

		//����ҳ���λ����m_tab�ؼ���Χ��
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

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CHuoRongJian2Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
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
