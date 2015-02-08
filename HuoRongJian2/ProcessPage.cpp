// ProcessPage.cpp : implementation file
//

#include "stdafx.h"
#include "HuoRongJian2.h"
#include "ProcessPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CProcessPage dialog


CProcessPage::CProcessPage(CWnd* pParent /*=NULL*/)
	: CDialog(CProcessPage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CProcessPage)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CProcessPage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CProcessPage)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CProcessPage, CDialog)
	//{{AFX_MSG_MAP(CProcessPage)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProcessPage message handlers
