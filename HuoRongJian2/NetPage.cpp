// NetPage.cpp : implementation file
//

#include "stdafx.h"
#include "HuoRongJian2.h"
#include "NetPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNetPage dialog


CNetPage::CNetPage(CWnd* pParent /*=NULL*/)
	: CDialog(CNetPage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNetPage)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CNetPage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNetPage)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNetPage, CDialog)
	//{{AFX_MSG_MAP(CNetPage)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNetPage message handlers
