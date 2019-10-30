#include "ui/DivBoxCtrl.h"
#include <wx/dcbuffer.h>

DivBoxCtrl::DivBoxCtrl():
                m_x(0),
                m_y(0),
                m_width(200),
                m_height(200),
                m_state(DIV_BOX_STATE.NORMAL)
{

}
DivBoxCtrl::~DivBoxCtrl()
{

}

BEGIN_EVENT_TABLE(DivBoxCtrl,wxWindow)
    EVT_LEFT_DOWN(DivBoxCtrl::OnLeftDown)
    EVT_LEFT_UP(DivBoxCtrl::OnLeftUp)
    EVT_MOTION(DivBoxCtrl::OnMouseMove)
    EVT_PAINT(DivBoxCtrl::OnPaint)
END_EVENT_TABLE()


int DivBoxCtrl::GetMarginLeft() const
{
    return m_margin[0];
}
int DivBoxCtrl::GetMarginTop() const
{
    return m_margin[1];
}
int DivBoxCtrl::GetMarginRight() const
{
    return m_margin[2];
}
int DivBoxCtrl::GetMarginBottom() const
{
    return m_margin[3];
}
int DivBoxCtrl::GetPaddingLeft() const
{
    return m_padding[0];
}
int DivBoxCtrl::GetPaddingTop() const
{
    return m_padding[1];
}
int DivBoxCtrl::GetPaddingRight() const
{
    return m_padding[2];
}
int DivBoxCtrl::GetPaddingBottom() const
{
    return m_padding[3];
}
void DivBoxCtrl::SetMarginLeft(int margin_left)
{
    m_margin[0] = margin_left;
}
void DivBoxCtrl::SetMarginTop(int margin_top)
{
    m_margin[1] = margin_top;
}
void DivBoxCtrl::SetMarginRight(int margin_right)
{
    m_margin[2] = margin_right;
}
void DivBoxCtrl::SetMarginBottom(int margin_bottom)
{
    m_margin[3] = margin_bottom;
}
void DivBoxCtrl::SetPaddingLeft(int padding_left)
{
    m_padding[0] = padding_left;
}
void DivBoxCtrl::SetPaddingTop(int padding_top)
{
    m_padding[1] = padding_top;
}
void DivBoxCtrl::SetPaddingRight(int padding_right)
{
    m_padding[2] = padding_right;
}
void DivBoxCtrl::SetPaddingBottom(int padding_bottom)
{
    m_padding[3] = padding_bottom;
}
void DivBoxCtrl::OnHitTest(wxPoint& pt)
{
    #define M 2
    if(pt.x >= m_marginBar[0]-M && pt.x <= m_marginBar[0]+M
        && pt.y >= m_marginBar[1] && pt.y <= m_marginBar[3]){
            m_state = DBS.MARGIN_LEFT;
    }else if(pt.y >= m_marginBar[1]-M && pt.y <= m_marginBar[1]+M
             && pt.x >= m_marginBar[0] && pt.x <= m_marginBar[2]){
            m_state = DBS.MARGIN_TOP;
    }else if(pt.x >= m_marginBar[2]-M && pt.x <= m_marginBar[2]+M
             && pt.y >= m_marginBar[1] && pt.y <= m_marginBar[3]){
            m_state = DBS.MARGIN_RIGHT;
    }else if(pt.y >= m_marginBar[3]-M && pt.y <= m_marginBar[3]+M
             && pt.x >= m_marginBar[0] && pt.x <= m_marginBar[2]){
            m_state = DBS.MARGIN_BOTTOM;
    }else{
            m_state = DBS.NORMAL;
    }
}
void DivBoxCtrl::DrawMarginBar(wxPaintDC& dc)
{

}
void DivBoxCtrl::DrawPaddingBar(wxPaintDC& dc)
{

}

void DivBoxCtrl::DrawDivBox(wxPaintDC& dc)
{

}

void DivBoxCtrl::OnLeftDown(wxMouseEvent& event)
{
    m_bMouseDown = true;
    m_ptMouse = event.GetPosition();
}

void DivBoxCtrl::OnLeftUp(wxMouseEvent& event)
{
    m_bMouseDown = false;
}

void DivBoxCtrl::OnMouseMove(wxMouseEvent& event)
{
    m_ptMouse = event.GetPosition(&m_ptMouse.x,&m_ptMouse.y);
    if(!m_bMouseDown){

    }
}

void DivBoxCtrl::OnPaint(wxMouseEvent& event)
{
    wxBufferedPaintDC dc(DivBoxCtrl);
    dc.clear();
    DrawMarginBar(dc);
    DrawDivBox(dc);
}
