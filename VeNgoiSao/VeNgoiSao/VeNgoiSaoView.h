
// VeNgoiSaoView.h : interface of the CVeNgoiSaoView class
//

#pragma once
#include "NgoiSao.h"

class CVeNgoiSaoView : public CView
{
protected: // create from serialization only
	CVeNgoiSaoView() noexcept;
	DECLARE_DYNCREATE(CVeNgoiSaoView)
	
// Attributes
public:
	CVeNgoiSaoDoc* GetDocument() const;

// Operations
public:
	NgoiSao ngoisao;
	CPoint p1, p3;
	int down;
// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CVeNgoiSaoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
//	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // debug version in VeNgoiSaoView.cpp
inline CVeNgoiSaoDoc* CVeNgoiSaoView::GetDocument() const
   { return reinterpret_cast<CVeNgoiSaoDoc*>(m_pDocument); }
#endif

