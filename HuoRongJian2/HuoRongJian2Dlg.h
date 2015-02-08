
// HuoRongJian2Dlg.h : ͷ�ļ�
//

#pragma once

#include "SystemPage.h"	// Added by ClassView
#include "ProcessPage.h"	// Added by ClassView
#include "StartUpPage.h"	// Added by ClassView
#include "KernelPage.h"	// Added by ClassView
#include "HookScanPage.h"	// Added by ClassView
#include "ServicePage.h"	// Added by ClassView
#include "DriverPage.h"	// Added by ClassView
#include "NetPage.h"	// Added by ClassView
#include "FilePage.h"	// Added by ClassView
#include "RegistryPage.h"	// Added by ClassView

// CHuoRongJian2Dlg �Ի���
class CHuoRongJian2Dlg : public CDialogEx
{
// ����
public:
	CHuoRongJian2Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_HUORONGJIAN2_DIALOG };
	CTabCtrl	m_tab;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

public:

	CSystemPage SystemPage;
	CProcessPage ProcessPage;
	CStartUpPage StartUpPage;
	CKernelPage KernelPage;
	CHookScanPage HookScanPage;
	CHookScanPage ServicePage;
	CDriverPage DriverPage;
	CNetPage NetPage;
	CFilePage FilePage;
	CRegistryPage RegistryPage;

	//{{AFX_MSG(CTestView)
	afx_msg void OnSelchangeTab1(NMHDR* pNMHDR, LRESULT* pResult);

// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();

	DECLARE_MESSAGE_MAP()
};
