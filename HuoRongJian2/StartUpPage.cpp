// StartUpPage.cpp : implementation file
//

#include "stdafx.h"
#include "HuoRongJian2.h"
#include "StartUpPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStartUpPage dialog


CStartUpPage::CStartUpPage(CWnd* pParent /*=NULL*/)
	: CDialog(CStartUpPage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CStartUpPage)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CStartUpPage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CStartUpPage)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CStartUpPage, CDialog)
	//{{AFX_MSG_MAP(CStartUpPage)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStartUpPage message handlers
