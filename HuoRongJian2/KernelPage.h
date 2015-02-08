#if !defined(AFX_KernelPage_H__5C677958_FE4C_457F_9591_EDEE71768A43__INCLUDED_)
#define AFX_KernelPage_H__5C677958_FE4C_457F_9591_EDEE71768A43__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// KernelPage.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CKernelPage dialog

class CKernelPage : public CDialog
{
// Construction
public:
	CKernelPage(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CKernelPage)
	enum { IDD = IDD_KERNELPAGE };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CKernelPage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CKernelPage)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_KernelPage_H__5C677958_FE4C_457F_9591_EDEE71768A43__INCLUDED_)
