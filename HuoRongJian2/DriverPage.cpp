// DriverPage.cpp : implementation file
//

#include "stdafx.h"
#include "HuoRongJian2.h"
#include "DriverPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDriverPage dialog


CDriverPage::CDriverPage(CWnd* pParent /*=NULL*/)
	: CDialog(CDriverPage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDriverPage)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDriverPage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDriverPage)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDriverPage, CDialog)
	//{{AFX_MSG_MAP(CDriverPage)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDriverPage message handlers
