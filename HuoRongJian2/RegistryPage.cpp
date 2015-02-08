// RegistryPage.cpp : implementation Registry
//

#include "stdafx.h"
#include "HuoRongJian2.h"
#include "RegistryPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRegistryPage dialog


CRegistryPage::CRegistryPage(CWnd* pParent /*=NULL*/)
	: CDialog(CRegistryPage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CRegistryPage)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CRegistryPage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRegistryPage)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CRegistryPage, CDialog)
	//{{AFX_MSG_MAP(CRegistryPage)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRegistryPage message handlers
