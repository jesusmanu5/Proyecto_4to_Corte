///-----------------------------------------------------------------
///
/// @file      CesarGrafico.h
/// @author    @jesusmanu5
/// Created:   13/05/2017 20:04:38
/// @section   DESCRIPTION
///            CesarGrafico class declaration
///
///------------------------------------------------------------------

#ifndef __CESARGRAFICO_H__
#define __CESARGRAFICO_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/filedlg.h>
#include <wx/menu.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
////Header Include End

////Dialog Style Start
#undef CesarGrafico_STYLE
#define CesarGrafico_STYLE wxCAPTION | wxRESIZE_BORDER | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class CesarGrafico : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		CesarGrafico(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Cifrado de Cesar"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = CesarGrafico_STYLE);
		virtual ~CesarGrafico();
		void GuardClick(wxCommandEvent& event);
		void WxGuardClick(wxCommandEvent& event);
		void WxAbrirClick(wxCommandEvent& event);
		void WxsaveasClick(wxCommandEvent& event);
		void WxsaveClick(wxCommandEvent& event);
		void WxopenClick(wxCommandEvent& event);
		void WxexitClick(wxCommandEvent& event);
		void wxbuttoncodClick(wxCommandEvent& event);
		void wxbuttondecClick(wxCommandEvent& event);
		void wxnumdezpl1Updated(wxCommandEvent& event);
		void isnertextcodUpdated(wxCommandEvent& event);
		void wxnumdezpl2Updated(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxFileDialog *WxOpenFileDialog1;
		wxFileDialog *WxSaveFileDialog1;
		wxMenuBar *WxMenuBar1;
		wxTextCtrl *insertxtcod;
		wxButton *wxbuttondec;
		wxTextCtrl *wxnumdezpl2;
		wxStaticText *wxtxtnumdezpl2;
		wxStaticText *wxtxttitlecod;
		wxPanel *panelcodif;
		wxStaticText *wxtitltetextdec;
		wxTextCtrl *wxnumdezpl1;
		wxStaticText *wxtxtnumdezpl1;
		wxButton *wxbuttoncod;
		wxTextCtrl *insertxtdec;
		wxPanel *paneldecodif;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_INSERTXTCOD = 1025,
			ID_WXBUTTONDEC = 1024,
			ID_WXNUMDEZPL2 = 1023,
			ID_WXTXTNUMDEZPL2 = 1022,
			ID_WXTXTTITLECOD = 1021,
			ID_PANELCODIF = 1020,
			ID_TITLETEXTDEC = 1010,
			ID_WXNUMDEZPL1 = 1014,
			ID_WXTXTNUMDEZPL1 = 1013,
			ID_WXBUTTONCOD = 1012,
			ID_INSERTXTDEC = 1011,
			ID_PANELDECODIF = 1009,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
