//---------------------------------------------------------------------------
//
// Name:        Proyecto1App.cpp
// Author:      @jesusmanu5
// Created:     13/05/2017 20:04:37
// Description: 
//
//---------------------------------------------------------------------------

#include "Proyecto1App.h"
#include "CesarGrafico.h"

IMPLEMENT_APP(CesarGraficoApp)

bool CesarGraficoApp::OnInit()
{
    CesarGrafico* frame = new CesarGrafico(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int CesarGraficoApp::OnExit()
{
	return 0;
}
