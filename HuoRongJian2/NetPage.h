#if !defined(AFX_NetPage_H__BDDB3B90_92D7_49D1_B202_0B1D471A4B65__INCLUDED_)
#define AFX_NetPage_H__BDDB3B90_92D7_49D1_B202_0B1D471A4B65__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NetPage.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNetPage dialog

class CNetPage : public CDialog
{
// Construction
public:
	CNetPage(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CNetPage)
	enum { IDD = IDD_NETPAGE };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNetPage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNetPage)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NetPage_H__BDDB3B90_92D7_49D1_B202_0B1D471A4B65__INCLUDED_)
