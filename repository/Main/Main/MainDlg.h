
// MainDlg.h: 헤더 파일
//

#pragma once


// CMainDlg 대화 상자
class CMainDlg : public CDialogEx
{
// 생성입니다.
public:
	CMainDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MAIN_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg BOOL OnDeviceChange(UINT, DWORD);
	BOOL CMainDlg::SetHook();
	BOOL CMainDlg::UnHook();
	DECLARE_MESSAGE_MAP()
public:
	void Load();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	CBitmap m_bitMain;
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	void hide();
	CListBox m_cListBox;
	
};
