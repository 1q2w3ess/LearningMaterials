
// AddCalcuDlg.h : ͷ�ļ�
//
#pragma once
#include "TipDlg.h"

// CAddCalcuDlg �Ի���
class CAddCalcuDlg : public CDialogEx
{
// ����
public:
	CAddCalcuDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_ADDCALCU_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	double m_editSummand;
	double m_editAddend;
	double m_editSum;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedAddButton();
};
