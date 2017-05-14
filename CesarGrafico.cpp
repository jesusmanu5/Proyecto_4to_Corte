///-----------------------------------------------------------------
///
/// @file      CesarGrafico.cpp
/// @author    @jesusmanu5
/// Created:   13/05/2017 20:04:38
/// @section   DESCRIPTION
///            CesarGrafico class implementation
///
///------------------------------------------------------------------

#include "CesarGrafico.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// CesarGrafico
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(CesarGrafico,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(CesarGrafico::OnClose)
	EVT_MENU(wxID_OPEN, CesarGrafico::WxopenClick)
	EVT_MENU(wxID_SAVE, CesarGrafico::WxsaveClick)
	EVT_MENU(wxID_SAVEAS, CesarGrafico::WxsaveasClick)
	EVT_MENU(wxID_EXIT, CesarGrafico::WxexitClick)
	
	EVT_TEXT(ID_INSERTXTCOD,CesarGrafico::isnertextcodUpdated)
	EVT_BUTTON(ID_WXBUTTONDEC,CesarGrafico::wxbuttondecClick)
	
	EVT_TEXT(ID_WXNUMDEZPL2,CesarGrafico::wxnumdezpl2Updated)
	
	EVT_TEXT(ID_WXNUMDEZPL1,CesarGrafico::wxnumdezpl1Updated)
	EVT_BUTTON(ID_WXBUTTONCOD,CesarGrafico::wxbuttoncodClick)
END_EVENT_TABLE()
////Event Table End

CesarGrafico::CesarGrafico(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

CesarGrafico::~CesarGrafico()
{
}

void CesarGrafico::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	paneldecodif = new wxPanel(this, ID_PANELDECODIF, wxPoint(8, 37), wxSize(389, 170));
	paneldecodif->SetForegroundColour(wxColour(64,0,64));
	paneldecodif->SetBackgroundColour(wxColour(64,0,64));

	insertxtdec = new wxTextCtrl(paneldecodif, ID_INSERTXTDEC, wxEmptyString, wxPoint(13, 60), wxSize(362, 98), wxTE_MULTILINE, wxDefaultValidator, _("insertxtdec"));
	insertxtdec->SetMaxLength(0);
	insertxtdec->SetFocus();
	insertxtdec->SetInsertionPointEnd();

	wxbuttoncod = new wxButton(paneldecodif, ID_WXBUTTONCOD, _("Codificar"), wxPoint(292, 33), wxSize(75, 25), 0, wxDefaultValidator, _("wxbuttoncod"));

	wxtxtnumdezpl1 = new wxStaticText(paneldecodif, ID_WXTXTNUMDEZPL1, _("Nº Dezplazamiento:"), wxPoint(5, 36), wxDefaultSize, 0, _("wxtxtnumdezpl1"));
	wxtxtnumdezpl1->SetForegroundColour(wxColour(255,0,0));
	wxtxtnumdezpl1->SetBackgroundColour(wxColour(_("SKY BLUE")));
	wxtxtnumdezpl1->SetFont(wxFont(9, wxSWISS, wxNORMAL, wxNORMAL, false, _("Algerian")));

	wxnumdezpl1 = new wxTextCtrl(paneldecodif, ID_WXNUMDEZPL1, _(""), wxPoint(133, 35), wxSize(77, 19), 0, wxDefaultValidator, _("wxnumdezpl1"));

	wxtitltetextdec = new wxStaticText(this, ID_TITLETEXTDEC, _("Texto a decodificar :"), wxPoint(116, 47), wxDefaultSize, 0, _("wxtitltetextdec"));
	wxtitltetextdec->SetForegroundColour(wxColour(_("RED")));
	wxtitltetextdec->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_SCROLLBAR));
	wxtitltetextdec->SetFont(wxFont(11, wxSWISS, wxNORMAL, wxNORMAL, false, _("Algerian")));

	panelcodif = new wxPanel(this, ID_PANELCODIF, wxPoint(9, 230), wxSize(389, 174));
	panelcodif->SetForegroundColour(wxColour(64,0,64));
	panelcodif->SetBackgroundColour(wxColour(64,0,64));

	wxtxttitlecod = new wxStaticText(panelcodif, ID_WXTXTTITLECOD, _("Texto a codificar :"), wxPoint(112, 9), wxDefaultSize, 0, _("wxtxttitlecod"));
	wxtxttitlecod->SetForegroundColour(wxColour(_("RED")));
	wxtxttitlecod->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_SCROLLBAR));
	wxtxttitlecod->SetFont(wxFont(11, wxSWISS, wxNORMAL, wxNORMAL, false, _("Algerian")));

	wxtxtnumdezpl2 = new wxStaticText(panelcodif, ID_WXTXTNUMDEZPL2, _("Nº Dezplazamiento:"), wxPoint(5, 36), wxDefaultSize, 0, _("wxtxtnumdezpl2"));
	wxtxtnumdezpl2->SetForegroundColour(wxColour(255,0,0));
	wxtxtnumdezpl2->SetBackgroundColour(wxColour(_("SKY BLUE")));
	wxtxtnumdezpl2->SetFont(wxFont(9, wxSWISS, wxNORMAL, wxNORMAL, false, _("Algerian")));

	wxnumdezpl2 = new wxTextCtrl(panelcodif, ID_WXNUMDEZPL2, _(""), wxPoint(133, 35), wxSize(77, 19), 0, wxDefaultValidator, _("wxnumdezpl2"));

	wxbuttondec = new wxButton(panelcodif, ID_WXBUTTONDEC, _("Decodificar"), wxPoint(290, 32), wxSize(75, 25), 0, wxDefaultValidator, _("wxbuttondec"));

	insertxtcod = new wxTextCtrl(panelcodif, ID_INSERTXTCOD, wxEmptyString, wxPoint(10, 62), wxSize(362, 98), wxTE_MULTILINE, wxDefaultValidator, _("insertxtcod"));
	insertxtcod->SetMaxLength(0);
	insertxtcod->SetFocus();
	insertxtcod->SetInsertionPointEnd();

	WxMenuBar1 = new wxMenuBar();
	wxMenu *wxID_MNU_ARCHIVO_Mnu_Obj = new wxMenu();
	wxID_MNU_ARCHIVO_Mnu_Obj->Append(wxID_OPEN, _("Abrir"), _(""), wxITEM_NORMAL);
	wxID_MNU_ARCHIVO_Mnu_Obj->Append(wxID_SAVE, _("Guardar"), _(""), wxITEM_NORMAL);
	wxID_MNU_ARCHIVO_Mnu_Obj->Append(wxID_SAVEAS, _("Guardar como"), _(""), wxITEM_NORMAL);
	wxID_MNU_ARCHIVO_Mnu_Obj->Append(wxID_EXIT, _("Salir"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(wxID_MNU_ARCHIVO_Mnu_Obj, _("Archivo"));
	SetMenuBar(WxMenuBar1);

	WxSaveFileDialog1 =  new wxFileDialog(this, _("Choose a file"), _(""), _(""), _("*.*"), wxFD_SAVE);

	WxOpenFileDialog1 =  new wxFileDialog(this, _("Choose a file"), _(""), _(""), _("*.*"), wxFD_OPEN);

	SetTitle(_("Cifrado de Cesar"));
	SetIcon(wxNullIcon);
	SetSize(8,8,433,453);
	Center();
	
	////GUI Items Creation End
}

void CesarGrafico::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * GuardClick
 */
void CesarGrafico::GuardClick(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxGuardClick
 */
void CesarGrafico::WxGuardClick(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxAbrirClick
 */
void CesarGrafico::WxAbrirClick(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxsaveasClick
 */
void CesarGrafico::WxsaveasClick(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxsaveClick
 */
void CesarGrafico::WxsaveClick(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxopenClick
 */
void CesarGrafico::WxopenClick(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxexitClick
 */
void CesarGrafico::WxexitClick(wxCommandEvent& event)
{
	Destroy();
}

/*
 * wxbuttoncodClick
 */
void CesarGrafico::wxbuttoncodClick(wxCommandEvent& event)
{
   	wxString txt;
	int num,tam;
    char temp;
	num=wxAtoi(wxnumdezpl2->GetValue());
    txt=insertxtdec->GetValue();
    tam=txt.size();
	for(int j=0; j<tam; j++){
		if(txt[j]>64 && txt[j]<91){
            temp=txt[j];
            temp=temp-((num%26));
			txt[j]=temp;
			if(txt[j]<65){
                temp=txt[j];
                temp=temp+26;
				txt[j]=temp;
			}
		}
		if(txt[j]>96 && txt[j]<123){
            temp=txt[j];
            temp=temp-((num%26));
			txt[j]=temp;
			if(txt[j]<97){
                temp=txt[j];
                temp=temp+26;
				txt[j]=temp;
			}
		}
		if(txt[j]=='Ñ' || txt[j]=='ñ'){
		   txt[j]='#';
		}		
	}
	
	insertxtcod->SetValue(txt);
	
}

/*
 * wxbuttondecClick
 */
void CesarGrafico::wxbuttondecClick(wxCommandEvent& event)
{
    wxString txt;
	int num,tam,band=0;
    char temp;
	num= wxAtoi(wxnumdezpl1->GetValue());
    txt=insertxtcod->GetValue();
    tam=txt.size();
	for(int j=0; j<tam; j++){
		if(txt[j]>64 && txt[j]<91){
            temp=txt[j];
            temp=temp+((num%26));
			txt[j]=temp;
			if(txt[j]>90){
                temp=txt[j];
                temp=temp-26;
				txt[j]=temp;
			}
			band=1;
		}
        if(txt[j]>96 && txt[j]<123){
            temp=txt[j];
            temp=temp+((num%26));
			txt[j]=temp;
			if(txt[j]>122){
                temp=txt[j];
                temp=temp-26;
				txt[j]=temp;
			}
		}
		if(txt[j]=='#'){
            if(band==1){
                txt[j]='ñ';
            }
			txt[j]='Ñ';
		}		
	}
	insertxtcod->SetValue(txt);
}

/*
 * wxnumdezpl1Updated
 */
void CesarGrafico::wxnumdezpl1Updated(wxCommandEvent& event)
{
    if(wxnumdezpl1->GetValue()!=""){
        wxbuttoncod->Enable(true);
    }else{
        wxbuttoncod->Enable(false);
    } 
}

/*
 * isnertextcodUpdated
 */
void CesarGrafico::isnertextcodUpdated(wxCommandEvent& event)
{

}

/*
 * wxnumdezpl2Updated
 */
void CesarGrafico::wxnumdezpl2Updated(wxCommandEvent& event)
{
  if(wxnumdezpl2->GetValue()!=""){
        wxbuttondec->Enable(true);
    }else{
        wxbuttondec->Enable(false);
  }
}
