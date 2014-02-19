#pragma once
#include "afxcmn.h"


// COversightBillingDlg dialog

class COversightBillingDlg : public CDialogEx
{
	DECLARE_DYNAMIC(COversightBillingDlg)
	
	Cpatient_master *m_patient;
	Cpatient_episode *m_episode;
	Coversight_billing *m_oversight;
	CString GetCurrentMonth();
	void PopulateOversightBillingList();
	void* m_pView;
public:
	COversightBillingDlg(void* pView
						 ,Cpatient_master* patient
						 ,Cpatient_episode* episode  
						 ,CWnd* pParent = NULL);   // standard constructor
	virtual ~COversightBillingDlg();

// Dialog Data
	enum { IDD = IDD_OVERSIGHT_BILLING };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CListCtrl m_oversightList;
};
