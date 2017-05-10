//---------------------------------------------------------------------------
//
// Name:        CifradoCesarGraficoApp.h
// Author:      @jesusmanu5
// Created:     10/05/2017 11:46:33
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __CIFRADOCESARGRAFICOFRMApp_h__
#define __CIFRADOCESARGRAFICOFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class CifradoCesarGraficoFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
