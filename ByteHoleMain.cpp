/***************************************************************
 * Name:      ByteHoleMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    ofix ()
 * Created:   2019-10-26
 * Copyright: ofix ()
 * License:
 **************************************************************/

#include "ByteHoleMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(ByteHoleFrame)
#include <wx/settings.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(ByteHoleFrame)
const long ByteHoleFrame::ID_BUTTON_TEST = wxNewId();
const long ByteHoleFrame::ID_PANEL_TEST = wxNewId();
const long ByteHoleFrame::idMenuQuit = wxNewId();
const long ByteHoleFrame::idMenuAbout = wxNewId();
const long ByteHoleFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ByteHoleFrame,wxFrame)
    //(*EventTable(ByteHoleFrame)
    //*)
END_EVENT_TABLE()

ByteHoleFrame::ByteHoleFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(ByteHoleFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, wxT("id"));
    PanelTest = new wxPanel(this, ID_PANEL_TEST, wxPoint(192,0), wxSize(152,450), wxTAB_TRAVERSAL, wxT("ID_PANEL_TEST"));
    PanelTest->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHT));
    ButtonTest = new wxButton(PanelTest, ID_BUTTON_TEST, wxT("测试2"), wxPoint(48,80), wxDefaultSize, 0, wxDefaultValidator, wxT("ID_BUTTON_TEST"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, wxT("Quit\tAlt-F4"), wxT("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, wxT("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, wxT("About\tF1"), wxT("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, wxT("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, wxT("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&ByteHoleFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&ByteHoleFrame::OnAbout);
    //*)
}

ByteHoleFrame::~ByteHoleFrame()
{
    //(*Destroy(ByteHoleFrame)
    //*)
}

void ByteHoleFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void ByteHoleFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
