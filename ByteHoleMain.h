/***************************************************************
 * Name:      ByteHoleMain.h
 * Purpose:   Defines Application Frame
 * Author:    ofix ()
 * Created:   2019-10-26
 * Copyright: ofix ()
 * License:
 **************************************************************/

#ifndef BYTEHOLEMAIN_H
#define BYTEHOLEMAIN_H

//(*Headers(ByteHoleFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/statusbr.h>
//*)

class ByteHoleFrame: public wxFrame
{
    public:

        ByteHoleFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~ByteHoleFrame();

    private:

        //(*Handlers(ByteHoleFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(ByteHoleFrame)
        static const long ID_BUTTON_TEST;
        static const long ID_PANEL_TEST;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(ByteHoleFrame)
        wxButton* ButtonTest;
        wxPanel* PanelTest;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // BYTEHOLEMAIN_H
