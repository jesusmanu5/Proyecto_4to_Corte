///-----------------------------------------------------------------
///
/// @file      CifradoCesarGraficoFrm.h
/// @author    @jesusmanu5
/// Created:   10/05/2017 11:46:41
/// @section   DESCRIPTION
///            CifradoCesarGraficoFrm class declaration
///
///------------------------------------------------------------------

#ifndef __CIFRADOCESARGRAFICOFRM_H__
#define __CIFRADOCESARGRAFICOFRM_H__

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
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/textctrl.h>
////Header Include End

////Dialog Style Start
#undef CifradoCesarGraficoFrm_STYLE
#define CifradoCesarGraficoFrm_STYLE wxCAPTION | wxRESIZE_BORDER | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxMAXIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class CifradoCesarGraficoFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		CifradoCesarGraficoFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Cifrado de Cesar"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = CifradoCesarGraficoFrm_STYLE);
		virtual ~CifradoCesarGraficoFrm();
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxStaticText *WxStaticText2;
		wxStaticText *WxStaticText1;
		wxButton *WxButton1;
		wxTextCtrl *WxEdit2;
		wxTextCtrl *WxEdit1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXSTATICTEXT2 = 1005,
			ID_WXSTATICTEXT1 = 1004,
			ID_WXBUTTON1 = 1003,
			ID_WXEDIT2 = 1002,
			ID_WXEDIT1 = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
