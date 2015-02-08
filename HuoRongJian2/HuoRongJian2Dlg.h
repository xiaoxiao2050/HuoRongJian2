
// HuoRongJian2Dlg.h : 头文件
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

// CHuoRongJian2Dlg 对话框
class CHuoRongJian2Dlg : public CDialogEx
{
// 构造
public:
	CHuoRongJian2Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_HUORONGJIAN2_DIALOG };
	CTabCtrl	m_tab;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

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

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();

	DECLARE_MESSAGE_MAP()
};
