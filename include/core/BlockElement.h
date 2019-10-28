#ifndef BLOCKELEMENT_H
#define BLOCKELEMENT_H

#include <core/Element.h>
#include <core/enum.h>


class BlockElement : public Element
{
    public:
        BlockElement();
        virtual ~BlockElement();
        void SetPadding(int padding);
        void SetPaddingLeft(int padding_left);
        void SetPaddingRight(int padding_right);
        void SetPaddingTop(int padding_top);
        void SetPaddingBottom(int padding_bottom);
        void SetMargin(int margin);
        void SetMarginTop(int margin_top);
        void SetMarginBottom(int margin_bottom);
        void SetMarginLeft(int margin_left);
        void SetMarginRight(int margin_right);
        int* GetPadding();
        int GetPaddingLeft();
        int GetPaddingRight();
        int GetPaddingTop();
        int GetPaddingBottom();
        int GetMarginLeft();
        int GetMarginRight();
        int GetMarginTop();
        int GetMarginBottom();
        void SetBorderWidth(int border_width);
        int* GetBorderWidth();
        void SetBorderLeftWidth(int width);
        void SetBorderRightWidth(int width);
        void SetBorderTopWidth(int width);
        void SetBorderBottomWidth(int width);
        int GetBorderLeftWidth();
        int GetBorderRightWidth();
        int GetBorderTopWidth();
        int GetBorderBottomWidth();
        void SetBorderStyle(EnumBorderStyle style);
        EnumBorderStyle* GetBorderStyle();
        void SetCorner(int left=0,int top=0,int right=0,int bottom=0);
        int GetCornerLeft();
        int GetCornerRight();
        int GetCornerTop();
        int GetCornerBottom();
        void SetCornerLeft(int corner_left);
        void SetCornerRight(int corner_right);
        void SetCornerTop(int corner_top);
        void SetCornerBottom(int corner_bottom);
        void SetZIndex(int z_index);
        int GetZIndex();
        void SetLayout(EnumLayout layout);
        EnumLayout GetLayout();

//        wxString ToMetaCode()=0;
//        wxString ToHtml()=0;
//        wxString ToVueJs()=0;
//        wxString ToJavascript()=0;
//        wxString ToTypescript()=0;

    protected:
        int m_padding[4];
        int m_margin[4];
        int m_borderWidth[4];
        EnumBorderStyle m_borderStyle[4];
        int m_corner[4];
        int m_zIndex;
        EnumLayout m_layout;
        bool m_bIsCloneObject;
};

#endif // BLOCKELEMENT_H
