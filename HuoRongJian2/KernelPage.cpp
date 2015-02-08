// KernelPage.cpp : implementation file
//

#include "stdafx.h"
#include "HuoRongJian2.h"
#include "KernelPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CKernelPage dialog


CKernelPage::CKernelPage(CWnd* pParent /*=NULL*/)
	: CDialog(CKernelPage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CKernelPage)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CKernelPage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CKernelPage)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CKernelPage, CDialog)
	//{{AFX_MSG_MAP(CKernelPage)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CKernelPage message handlers
