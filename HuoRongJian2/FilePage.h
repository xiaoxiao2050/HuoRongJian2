#if !defined(AFX_FilePage_H__BDDB3B90_92D7_49D1_B202_0B1D471A4B65__INCLUDED_)
#define AFX_FilePage_H__BDDB3B90_92D7_49D1_B202_0B1D471A4B65__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FilePage.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CFilePage dialog

class CFilePage : public CDialog
{
// Construction
public:
	CFilePage(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CFilePage)
	enum { IDD = IDD_FILEPAGE };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFilePage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CFilePage)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FilePage_H__BDDB3B90_92D7_49D1_B202_0B1D471A4B65__INCLUDED_)
