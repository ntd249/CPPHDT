#pragma once
class NgoiSao
{
public:
	NgoiSao();
	int x1, y1, x3, y3;
	int x2, y2, x4, y4;
	int x5, y5;
	int x6, y6;
	int x7, y7;
	void thietlap(int mx1, int my1, int mx3, int my3);
	void ve(CClientDC* pDC);
	~NgoiSao();
};

