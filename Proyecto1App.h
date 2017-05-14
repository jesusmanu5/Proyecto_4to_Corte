//---------------------------------------------------------------------------
//
// Name:        Proyecto1App.h
// Author:      @jesusmanu5
// Created:     13/05/2017 20:04:37
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __CESARGRAFICOApp_h__
#define __CESARGRAFICOApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class CesarGraficoApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
