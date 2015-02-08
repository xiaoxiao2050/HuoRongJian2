// SystemPage.cpp : implementation file
//

#include "stdafx.h"
#include "HuoRongJian2.h"
#include "SystemPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSystemPage dialog


CSystemPage::CSystemPage(CWnd* pParent /*=NULL*/)
	: CDialog(CSystemPage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSystemPage)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CSystemPage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSystemPage)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSystemPage, CDialog)
	//{{AFX_MSG_MAP(CSystemPage)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSystemPage message handlers
