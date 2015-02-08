// ServicePage.cpp : implementation file
//

#include "stdafx.h"
#include "HuoRongJian2.h"
#include "ServicePage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CServicePage dialog


CServicePage::CServicePage(CWnd* pParent /*=NULL*/)
	: CDialog(CServicePage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CServicePage)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CServicePage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CServicePage)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CServicePage, CDialog)
	//{{AFX_MSG_MAP(CServicePage)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CServicePage message handlers
