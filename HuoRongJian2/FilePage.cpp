// FilePage.cpp : implementation file
//

#include "stdafx.h"
#include "HuoRongJian2.h"
#include "FilePage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFilePage dialog


CFilePage::CFilePage(CWnd* pParent /*=NULL*/)
	: CDialog(CFilePage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CFilePage)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CFilePage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CFilePage)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CFilePage, CDialog)
	//{{AFX_MSG_MAP(CFilePage)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFilePage message handlers
