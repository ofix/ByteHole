#include "VisualObject.h"

VisualObject::VisualObject(wxString type,
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

VisualObject::~VisualObject()
{

}

int VisualObject::GetX()
{
    return m_x;
}
void VisualObject::SetX(int x)
{
    m_x =x ;
}
int VisualObject::GetY()
{
    return m_y;
}
void VisualObject::SetY(int y)
{
    m_y = y;
}
int VisualObject::GetWidth()
{
    return m_w;
}
void VisualObject::SetWidth(int width)
{
    m_w = width;
}
int VisualObject::GetHeight()
{
    return m_h;
}
void VisualObject::SetHeight(int height)
{
     m_h = height;
}
VisualObject* VisualObject::GetParent()
{
    return m_pParent;
}
bool VisualObject::IsInGroup()
{
    return m_bInGroup;
}
wxString VisualObject::GetType()
{
    return wxT("");
}
bool VisualObject::CompareTo(VisualObject* pObject)
{
    return false;
}
VisualObject* VisualObject::Clone()
{
    return nullptr;
}

void VisualObject::Rotate(double angle)
{

}
void VisualObject::RotateTo(double angle)
{

}
void VisualObject::RotateLeft(double angle)
{

}
void VisualObject::RotateRight(double angle)
{

}
void VisualObject::Move(int xOffset, int yOffset)
{

}
void VisualObject::MoveTo(int xPos, int yPos)
{

}
void VisualObject::ZoomIn(double scale_ratio)
{

}
void VisualObject::ZoomOut(double scale_ratio)
{

}

wxString VisualObject::Serialize()
{
    return wxT("");
}

VisualObject* VisualObject::UnSerialize()
{
    return nullptr;
}

bool VisualObject::IsSelected()
{
    return m_bSelected;
}

bool VisualObject::HitTest(wxPoint pt)
{
    return false;
}
