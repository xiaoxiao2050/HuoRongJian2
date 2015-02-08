#if !defined(AFX_StartUpPage_H__D096D05C_8A04_4194_A681_D1B631114BB1__INCLUDED_)
#define AFX_StartUpPage_H__D096D05C_8A04_4194_A681_D1B631114BB1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// StartUpPage.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CStartUpPage dialog

class CStartUpPage : public CDialog
{
// Construction
public:
	CStartUpPage(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CStartUpPage)
	enum { IDD = IDD_STARTUPPAGE };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStartUpPage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CStartUpPage)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_StartUpPage_H__D096D05C_8A04_4194_A681_D1B631114BB1__INCLUDED_)
