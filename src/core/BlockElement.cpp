#include "core/BlockElement.h"

BlockElement::BlockElement()
{

}
BlockElement::~BlockElement()
{

}
void BlockElement::SetPadding(int padding)
{
    m_padding[0] = padding;
    m_padding[1] = padding;
    m_padding[2] = padding;
    m_padding[3] = padding;
}
void BlockElement::SetPaddingLeft(int padding_left)
{
    m_padding[0] = padding_left;
}
void BlockElement::SetPaddingTop(int padding_top)
{
    m_padding[1] = padding_top;
}
void BlockElement::SetPaddingRight(int padding_right)
{
    m_padding[2] = padding_right;
}
void BlockElement::SetPaddingBottom(int padding_bottom)
{
    m_padding[3] = padding_bottom;
}
void BlockElement::SetMargin(int margin)
{
    m_margin[0] = margin;
    m_margin[1] = margin;
    m_margin[2] = margin;
    m_margin[3] = margin;
}
void BlockElement::SetMarginLeft(int margin_left)
{
    m_margin[0] = margin_left;
}
void BlockElement::SetMarginTop(int margin_top)
{
    m_margin[1] = margin_top;
}
void BlockElement::SetMarginRight(int margin_right)
{
    m_margin[2] = margin_right;
}
void BlockElement::SetMarginBottom(int margin_bottom)
{
    m_margin[3] = margin_bottom;
}
int* BlockElement::GetPadding()
{
    return m_padding;
}
int BlockElement::GetPaddingLeft()
{
    return m_padding[0];
}
int BlockElement::GetPaddingTop()
{
    return m_padding[1];
}
int BlockElement::GetPaddingRight()
{
    return m_padding[2];
}
int BlockElement::GetPaddingBottom()
{
    return m_padding[3];
}
int BlockElement::GetMarginLeft()
{
    return m_margin[0];
}
int BlockElement::GetMarginTop()
{
    return m_margin[1];
}
int BlockElement::GetMarginRight()
{
    return m_margin[2];
}
int BlockElement::GetMarginBottom()
{
    return m_margin[3];
}
void BlockElement::SetBorderWidth(int border_width)
{
    m_borderWidth[0] = border_width;
    m_borderWidth[1] = border_width;
    m_borderWidth[2] = border_width;
    m_borderWidth[3] = border_width;
}
int* BlockElement::GetBorderWidth()
{
    return m_borderWidth;
}
void BlockElement::SetBorderLeftWidth(int width)
{
    m_borderWidth[0] = width;
}
void BlockElement::SetBorderTopWidth(int width)
{
    m_borderWidth[1] = width;
}
void BlockElement::SetBorderRightWidth(int width)
{
    m_borderWidth[2] = width;
}
void BlockElement::SetBorderBottomWidth(int width)
{
    m_borderWidth[3] = width;
}
int BlockElement::GetBorderLeftWidth()
{
    return m_borderWidth[0];
}
int BlockElement::GetBorderTopWidth()
{
    return m_borderWidth[1];
}
int BlockElement::GetBorderRightWidth()
{
    return m_borderWidth[2];
}
int BlockElement::GetBorderBottomWidth()
{
    return m_borderWidth[3];
}
void BlockElement::SetBorderStyle(EnumBorderStyle style)
{
    m_borderStyle[0] = style;
    m_borderStyle[1] = style;
    m_borderStyle[2] = style;
    m_borderStyle[3] = style;
}
EnumBorderStyle* BlockElement::GetBorderStyle()
{
    return m_borderStyle;
}
void BlockElement::SetCorner(int left,int top,int right,int bottom)
{
    m_corner[0] = left;
    m_corner[1] = top;
    m_corner[2] = right;
    m_corner[3] = bottom;
}
int BlockElement::GetCornerLeft()
{
    return m_corner[0];
}
int BlockElement::GetCornerTop()
{
    return m_corner[1];
}
int BlockElement::GetCornerRight()
{
    return m_corner[2];
}
int BlockElement::GetCornerBottom()
{
    return m_corner[3];
}
void BlockElement::SetCornerLeft(int corner_left)
{
    m_corner[0] = corner_left;
}
void BlockElement::SetCornerTop(int corner_top)
{
    m_corner[1] = corner_top;
}
void BlockElement::SetCornerRight(int corner_right)
{
    m_corner[2] = corner_right;
}
void BlockElement::SetCornerBottom(int corner_bottom)
{
    m_corner[3] = corner_bottom;
}
void BlockElement::SetZIndex(int z_index)
{
    m_zIndex = z_index;
}
int BlockElement::GetZIndex()
{
    return m_zIndex;
}
void BlockElement::SetLayout(EnumLayout layout)
{
    m_layout = layout;
}
EnumLayout BlockElement::GetLayout()
{
    return m_layout;
}
