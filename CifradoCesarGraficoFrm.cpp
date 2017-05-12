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
	
	EVT_TEXT(ID_WXEDIT4,CifradoCesarGraficoFrm::WxEdit2Updated)
	
	EVT_TEXT(ID_WXEDIT3,CifradoCesarGraficoFrm::WxEdit3Updated)
	EVT_BUTTON(ID_WXBUTTON4,CifradoCesarGraficoFrm::WxButton4Click)
	EVT_BUTTON(ID_WXBUTTON1,CifradoCesarGraficoFrm::WxButton1Click)
	
	EVT_TEXT(ID_WXEDIT2,CifradoCesarGraficoFrm::WxEdit2Updated)
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

	WxEdit4 = new wxTextCtrl(this, ID_WXEDIT4, _(""), wxPoint(3, 270), wxSize(248, 21), 0, wxDefaultValidator, _("WxEdit4"));
	WxEdit4->SetFont(wxFont(11, wxSWISS, wxNORMAL, wxNORMAL, false, _("Calisto MT")));

	WxButton6 = new wxButton(this, ID_WXBUTTON6, _("Descifrar"), wxPoint(6, 234), wxSize(91, 26), 0, wxDefaultValidator, _("WxButton6"));
	WxButton6->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxNORMAL, false, _("Calisto MT")));

	WxStaticText3 = new wxStaticText(this, ID_WXSTATICTEXT3, _("Introduce el numero de dezplazamiento :"), wxPoint(2, 50), wxDefaultSize, 0, _("WxStaticText3"));
	WxStaticText3->SetFont(wxFont(11, wxSWISS, wxNORMAL, wxNORMAL, false, _("Arial")));

	WxEdit3 = new wxTextCtrl(this, ID_WXEDIT3, _(""), wxPoint(2, 77), wxSize(182, 19), 0, wxDefaultValidator, _("WxEdit3"));

	WxButton5 = new wxButton(this, ID_WXBUTTON5, _("Guardar"), wxPoint(158, 7), wxSize(75, 25), 0, wxDefaultValidator, _("WxButton5"));

	WxButton4 = new wxButton(this, ID_WXBUTTON4, _("Limpiar"), wxPoint(79, 7), wxSize(75, 25), 0, wxDefaultValidator, _("WxButton4"));

	WxButton3 = new wxButton(this, ID_WXBUTTON3, _("WxButton3"), wxPoint(66, -88), wxSize(75, 25), 0, wxDefaultValidator, _("WxButton3"));

	WxButton2 = new wxButton(this, ID_WXBUTTON2, _("Nuevo"), wxPoint(2, 8), wxSize(75, 24), 0, wxDefaultValidator, _("WxButton2"));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("Introduzca su mensaje :"), wxPoint(3, 107), wxDefaultSize, 0, _("WxStaticText1"));
	WxStaticText1->SetFont(wxFont(11, wxSWISS, wxNORMAL, wxNORMAL, false, _("Arial")));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("Cifrar"), wxPoint(5, 162), wxSize(100, 26), 0, wxDefaultValidator, _("WxButton1"));
	WxButton1->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxNORMAL, false, _("Calisto MT")));

	WxEdit2 = new wxTextCtrl(this, ID_WXEDIT2, _(""), wxPoint(2, 200), wxSize(252, 21), 0, wxDefaultValidator, _("WxEdit2"));
	WxEdit2->SetFont(wxFont(11, wxSWISS, wxNORMAL, wxNORMAL, false, _("Calisto MT")));

	WxEdit1 = new wxTextCtrl(this, ID_WXEDIT1, _(""), wxPoint(1, 132), wxSize(252, 22), 0, wxDefaultValidator, _("WxEdit1"));
	WxEdit1->SetFont(wxFont(11, wxSWISS, wxNORMAL, wxNORMAL, false, _("Calisto MT")));

	SetTitle(_("Cifrado de Cesar"));
	SetIcon(wxNullIcon);
	SetSize(8,8,438,382);
	Center();
	
	////GUI Items Creation End
}

void CifradoCesarGraficoFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxBitmapButton1Click
 */
void CifradoCesarGraficoFrm::WxBitmapButton1Click(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxButton4Click
 */
void CifradoCesarGraficoFrm::WxButton4Click(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxButton1Click
 */
void CifradoCesarGraficoFrm::WxButton1Click(wxCommandEvent& event)
{
    //std::string texto = (WxEdit3*) even.GetEvenText();

/*void codifica(int n, string & cadena) 
{ 
    for (int i = 0; i < cadena.length(); i++) { 
        if (cadena[i] >= 'a' && cadena[i] <= 'z') { 
            if (cadena[i] + n > 'z') { 
                cadena[i] = 'a' - 'z' + cadena[i] + n - 1; 
            } else if (cadena[i] + n < 'a') { 
                cadena[i] = 'z' - 'a' + cadena[i] + n + 1; 
            } else { 
                cadena[i] += n; 
            } 
        } else if (cadena[i] >= 'A' && cadena[i] <= 'Z') { 
            if (cadena[i] + n > 'Z') { 
                cadena[i] = 'A' - 'Z' + cadena[i] + n - 1; 
            } else if (cadena[i] + n < 'A') { 
                cadena[i] = 'Z' - 'A' + cadena[i] + n + 1; 
            } else { 
                cadena[i] += n; 
            } 
        } 
     } 
}*/
}

/*
 * WxEdit2Updated
 */
void CifradoCesarGraficoFrm::WxEdit2Updated(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxEdit3Updated
 */
void CifradoCesarGraficoFrm::WxEdit3Updated(wxCommandEvent& event)
{
    
}
