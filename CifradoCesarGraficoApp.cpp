//---------------------------------------------------------------------------
//
// Name:        CifradoCesarGraficoApp.cpp
// Author:      @jesusmanu5
// Created:     10/05/2017 11:46:33
// Description: 
//
//---------------------------------------------------------------------------

#include "CifradoCesarGraficoApp.h"
#include "CifradoCesarGraficoFrm.h"

IMPLEMENT_APP(CifradoCesarGraficoFrmApp)

bool CifradoCesarGraficoFrmApp::OnInit()
{
    CifradoCesarGraficoFrm* frame = new CifradoCesarGraficoFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int CifradoCesarGraficoFrmApp::OnExit()
{
	return 0;
}
