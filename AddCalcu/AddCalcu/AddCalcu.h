
// AddCalcu.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CAddCalcuApp:
// �йش����ʵ�֣������ AddCalcu.cpp
//

class CAddCalcuApp : public CWinApp
{
public:
	CAddCalcuApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CAddCalcuApp theApp;