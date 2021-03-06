
// calcuatorDlg.h : 头文件
//

#pragma once


// CcalcuatorDlg 对话框
class CcalcuatorDlg : public CDialogEx
{
// 构造
public:
	CcalcuatorDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_CALCUATOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;
	int c;
	int c1;
	int c2;
	int c3;
	int c4;
	int c5;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_str;
	double temp;
	int flag;
	afx_msg void OnClicked1();
	afx_msg void OnBnClicked2();
	afx_msg void OnBnClicked3();
	afx_msg void OnBnClicked4();
	afx_msg void OnBnClicked5();
	afx_msg void OnBnClicked6();
	afx_msg void OnBnClicked7();
	afx_msg void OnBnClicked8();
	afx_msg void OnBnClicked9();
	afx_msg void OnBnClickedDot();
	afx_msg void OnBnClicked0();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedMultiply();
	afx_msg void OnBnClickedSubtraction();
	afx_msg void OnBnClickedCalcuator();
	afx_msg void OnBnClickedDivide();
	afx_msg void OnBnClickedClear();
	afx_msg void OnBnClickedMinus();
	afx_msg void OnBnClickedBackspace();
	afx_msg void OnBnClickedSin();
	afx_msg void OnBnClickedCos();
	afx_msg void OnBnClickedTan();
	afx_msg void OnBnClickedRadical();
	afx_msg void OnBnClickedPercent();
	afx_msg void OnBnClickedReciprocal();
	afx_msg void OnBnClickedSquare();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};
