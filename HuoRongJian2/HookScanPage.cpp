// HookScanPage.cpp : implementation file
//

#include "stdafx.h"
#include "HuoRongJian2.h"
#include "HookScanPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CHookScanPage dialog


CHookScanPage::CHookScanPage(CWnd* pParent /*=NULL*/)
	: CDialog(CHookScanPage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CHookScanPage)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CHookScanPage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CHookScanPage)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CHookScanPage, CDialog)
	//{{AFX_MSG_MAP(CHookScanPage)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHookScanPage message handlers
