#ifndef DIVBOXCTRL_H
#define DIVBOXCTRL_H

#include <wx/window.h>
#include <wx/dcclient.h>

enum class DBS{
    NORMAL = 0,
    MARGIN_LEFT = 1,
    MARGIN_TOP = 2,
    MARGIN_RIGHT = 3,
    MARGIN_BOTTOM = 4,
    PADDING_LEFT = 5,
    PADDING_TOP = 6,
    PADDING_RIGHT = 7,
    PADDING_BOTTOM = 8,
};

class DivBoxCtrl : public wxWindow
{
    public:
        DivBoxCtrl();
        virtual ~DivBoxCtrl();
        //mouse event
        void OnLeftDown(wxMouseEvent& event);
        void OnLeftUp(wxMouseEvent& event);
        void OnMouseMove(wxMouseEvent& event);
        void OnPaint(wxPaintEvent& event);

    protected:
        int GetMarginLeft()const;
        int GetMarginTop()const;
        int GetMarginRight()const;
        int GetMarginBottom()const;
        int GetPaddingLeft()const;
        int GetPaddingTop()const;
        int GetPaddingRight()const;
        int GetPaddingBottom()const;
        void SetMarginLeft(int margin_left);
        void SetMarginTop(int margin_top);
        void SetMarginRight(int margin_right);
        void SetMarginBottom(int margin_bottom);
        void SetPaddingLeft(int padding_left);
        void SetPaddingTop(int padding_top);
        void SetPaddingRight(int padding_right);
        void SetPaddingBottom(int padding_bottom);
        void OnHitTest(wxPoint& pt);
        void DrawMarginBar(wxPaintDC& dc);
        void DrawPaddingBar(wxPaintDC& dc);
        void DrawDivBox(wxPaintDC& dc);
    private:
        bool m_bMouseDown;
        int m_x;
        int m_y;
        int m_width;
        int m_height;
        int m_margin[4];
        int m_padding[4];
        int m_marginBar[4];
        int m_paddingBar[4];
        DIV_BOX_STATE m_state; //选中了哪一边

        DECLARE_EVENT_TABLE()
};

#endif // DIVBOXCTRL_H
