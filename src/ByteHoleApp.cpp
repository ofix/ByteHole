/***************************************************************
 * Name:      ByteHoleApp.cpp
 * Purpose:   Code for Application Class
 * Author:    ofix ()
 * Created:   2019-10-26
 * Copyright: ofix ()
 * License:
 **************************************************************/

#include "ByteHoleApp.h"

//(*AppHeaders
#include "ByteHoleMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(ByteHoleApp);

bool ByteHoleApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	ByteHoleFrame* Frame = new ByteHoleFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
