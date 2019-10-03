#include "pch.h"
#include "NgoiSao.h"
NgoiSao::NgoiSao(void){}
void NgoiSao::thietlap(int mx1, int my1, int mx3, int my3)
{
	x1 = mx1; y1 = my1;
	x3 = mx3; y3 = my3;
	x2 = x3;
	y2 = y1;
	x4 = x1;
	y4 = y3;
	x5 = (x3 + x1) / 2;
	y5 = y1;
	x6 = x3; y6 = (y3 + y1) / 2;
	x7 = x1; y7 = y6;
}
void NgoiSao::ve(CClientDC* pDC)
{
	pDC->MoveTo(x5, y5);
	pDC->LineTo(x3, y3);
	pDC->MoveTo(x3, y3);
	pDC->LineTo(x7, y7);
	pDC->MoveTo(x7, y7);
	pDC->LineTo(x6, y6);
	pDC->MoveTo(x6, y6);
	pDC->LineTo(x4, y4);
	pDC->MoveTo(x4, y4);
	pDC->LineTo(x5, y5);
}
NgoiSao::~NgoiSao(void){}
