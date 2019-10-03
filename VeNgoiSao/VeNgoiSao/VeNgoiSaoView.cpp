
// VeNgoiSaoView.cpp : implementation of the CVeNgoiSaoView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "VeNgoiSao.h"
#endif

#include "VeNgoiSaoDoc.h"
#include "VeNgoiSaoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVeNgoiSaoView

IMPLEMENT_DYNCREATE(CVeNgoiSaoView, CView)

BEGIN_MESSAGE_MAP(CVeNgoiSaoView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
//	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CVeNgoiSaoView construction/destruction

CVeNgoiSaoView::CVeNgoiSaoView() noexcept
{
	// TODO: add construction code here
	//ngoisao.thietlap(100, 200, 300, 400);
}

CVeNgoiSaoView::~CVeNgoiSaoView()
{
}

BOOL CVeNgoiSaoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CVeNgoiSaoView drawing

void CVeNgoiSaoView::OnDraw(CDC* /*pDC*/)
{
	CVeNgoiSaoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	
	// TODO: add draw code for native data here
}


// CVeNgoiSaoView printing

BOOL CVeNgoiSaoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CVeNgoiSaoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CVeNgoiSaoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CVeNgoiSaoView diagnostics

#ifdef _DEBUG
void CVeNgoiSaoView::AssertValid() const
{
	CView::AssertValid();
}

void CVeNgoiSaoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVeNgoiSaoDoc* CVeNgoiSaoView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVeNgoiSaoDoc)));
	return (CVeNgoiSaoDoc*)m_pDocument;
}
#endif //_DEBUG


// CVeNgoiSaoView message handlers


void CVeNgoiSaoView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	p1.x = point.x;
	p1.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CVeNgoiSaoView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	p3.x = point.x;
	p3.y = point.y;
	CClientDC pDC(this);
	ngoisao.thietlap(p1.x, p1.y, p3.x, p3.y);
	ngoisao.ve(&pDC);
	CView::OnLButtonUp(nFlags, point);
}



