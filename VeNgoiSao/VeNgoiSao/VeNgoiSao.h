
// VeNgoiSao.h : main header file for the VeNgoiSao application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CVeNgoiSaoApp:
// See VeNgoiSao.cpp for the implementation of this class
//

class CVeNgoiSaoApp : public CWinApp
{
public:
	CVeNgoiSaoApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVeNgoiSaoApp theApp;
