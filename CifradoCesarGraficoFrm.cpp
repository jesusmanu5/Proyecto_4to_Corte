///-----------------------------------------------------------------
///
/// @file      CifradoCesarGraficoFrm.cpp
/// @author    @jesusmanu5
/// Created:   10/05/2017 11:46:41
/// @section   DESCRIPTION
///            CifradoCesarGraficoFrm class implementation
///
///------------------------------------------------------------------

#include "CifradoCesarGraficoFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// CifradoCesarGraficoFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(CifradoCesarGraficoFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(CifradoCesarGraficoFrm::OnClose)
END_EVENT_TABLE()
////Event Table End

CifradoCesarGraficoFrm::CifradoCesarGraficoFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

CifradoCesarGraficoFrm::~CifradoCesarGraficoFrm()
{
}

void CifradoCesarGraficoFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("Texto Cifrado :"), wxPoint(282, 125), wxDefaultSize, 0, _("WxStaticText2"));
	WxStaticText2->SetFont(wxFont(11, wxSWISS, wxNORMAL, wxNORMAL, false, _("Arial Narrow")));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("Inroduce el texto a cifrar :"), wxPoint(20, 123), wxDefaultSize, 0, _("WxStaticText1"));
	WxStaticText1->SetFont(wxFont(11, wxSWISS, wxNORMAL, wxNORMAL, false, _("Arial Narrow")));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("Cifrar"), wxPoint(165, 153), wxSize(75, 34), 0, wxDefaultValidator, _("WxButton1"));
	WxButton1->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxNORMAL, false, _("Calisto MT")));

	WxEdit2 = new wxTextCtrl(this, ID_WXEDIT2, _(""), wxPoint(254, 155), wxSize(132, 27), 0, wxDefaultValidator, _("WxEdit2"));
	WxEdit2->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false, _("Calisto MT")));

	WxEdit1 = new wxTextCtrl(this, ID_WXEDIT1, _(""), wxPoint(19, 156), wxSize(132, 27), 0, wxDefaultValidator, _("WxEdit1"));
	WxEdit1->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false, _("Calisto MT")));

	SetTitle(_("Cifrado de Cesar"));
	SetIcon(wxNullIcon);
	SetSize(8,8,438,364);
	Center();
	
	////GUI Items Creation End
}

void CifradoCesarGraficoFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}
