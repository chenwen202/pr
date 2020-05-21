
// FingerDlg.h: 头文件
//

#pragma once


// CFingerDlg 对话框
class CFingerDlg : public CDialogEx
{
// 构造
public:
	CFingerDlg(CWnd* pParent = nullptr);	// 标准构造函数
	CStatic m_picCtrl1;
	CStatic m_picCtrl2;
	CStatic m_picCtrl3;
	CStatic m_picCtrl4;
	CStatic m_picCtrl5;
	CStatic m_picCtrl6;
	CStatic m_picCtrl7;
	CStatic m_picCtrl8;
	CStatic m_picCtrl9;
	CStatic m_picCtrl10;
	CStatic m_picCtrl11;
	CString m_name;
	CBitmap m_bmp; 
	CBrush m_brush;
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FINGER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedOk2();
	afx_msg void OnBnClickedOk3();
	afx_msg void OnBnClickedOk4();
	afx_msg void OnBnClickedOk6();
	afx_msg void OnBnClickedOk9();
	afx_msg void OnBnClickedOk7();
	afx_msg void OnBnClickedOk12();
	afx_msg void OnBnClickedOk5();
	afx_msg void OnBnClickedOk10();
	afx_msg void OnBnClickedOk11();
	afx_msg void OnBnClickedOk13();
	afx_msg void OnBnClickedOk8();
	afx_msg void OnBnClickedOk14();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};
