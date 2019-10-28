#include "core/Element.h"

Element::Element(wxString type,
                           int x,
                           int y,
                           int w,
                           int h,
                           double scale_ratio,
                           double rotate_angle)
                           :m_type(type),
                           m_x(x),
                           m_y(y),
                           m_w(w),
                           m_h(h),
                           m_scaleRatio(scale_ratio),
                           m_rotateAngle(rotate_angle),
                           m_bRotate(false),
                           m_bInGroup(false),
                           m_pParent(nullptr),
                           m_bSelected(true)
{

}

Element::~Element()
{

}

int Element::GetX()
{
    return m_x;
}
void Element::SetX(int x)
{
    m_x =x ;
}
int Element::GetY()
{
    return m_y;
}
void Element::SetY(int y)
{
    m_y = y;
}
int Element::GetWidth()
{
    return m_w;
}
void Element::SetWidth(int width)
{
    m_w = width;
}
int Element::GetHeight()
{
    return m_h;
}
void Element::SetHeight(int height)
{
     m_h = height;
}
Element* Element::GetParent()
{
    return m_pParent;
}
bool Element::IsInGroup()
{
    return m_bInGroup;
}
wxString Element::GetType()
{
    return wxT("");
}
bool Element::CompareTo(Element* pObject)
{
    return false;
}
Element* Element::Clone()
{
    return nullptr;
}

void Element::Rotate(double angle)
{

}
void Element::RotateTo(double angle)
{

}
void Element::RotateLeft(double angle)
{

}
void Element::RotateRight(double angle)
{

}
void Element::Move(int xOffset, int yOffset)
{
    m_x += xOffset;
    m_y += yOffset;
}
void Element::MoveTo(int xPos, int yPos)
{
    m_x = xPos;
    m_y = yPos;
}
void Element::ZoomIn(double scale_ratio)
{

}
void Element::ZoomOut(double scale_ratio)
{

}

wxString Element::Serialize()
{
    return wxT("");
}

Element* Element::UnSerialize()
{
    return nullptr;
}

bool Element::IsSelected()
{
    return m_bSelected;
}

bool Element::HitTest(wxPoint pt)
{
    return false;
}
