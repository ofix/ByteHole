#ifndef ELEMENT_H
#define ELEMENT_H

#include <wx/string.h>
#include <wx/gdicmn.h>


class Element
{
    public:
        Element(wxString type =wxT("Element"),int x=0,int y=0,int w=0,int h=0,double scale_ratio=0,double rotate_angle = 0);
        virtual ~Element();
        int GetX();
        void SetX(int x);
        int GetY();
        void SetY(int y);
        int GetWidth();
        void SetWidth(int width);
        int GetHeight();
        void SetHeight(int height);
        Element* GetParent();
        bool IsInGroup();
        wxString GetType();
        bool CompareTo(Element* pObject);
        Element* Clone();

        void Rotate(double angle);
        void RotateTo(double angle);
        void RotateLeft(double angle);
        void RotateRight(double angle);
        void Move(int xOffset, int yOffset);
        void MoveTo(int xPos, int yPos);
        void ZoomIn(double scale_ratio);
        void ZoomOut(double scale_ratio);

        wxString Serialize();
        Element* UnSerialize();

        bool IsSelected();
        bool HitTest(wxPoint pt);

    protected:
        wxString m_type;
        int m_x;
        int m_y;
        int m_w;
        int m_h;
        double m_scaleRatio;
        double m_rotateAngle;
        bool m_bRotate;
        bool m_bInGroup;
        Element* m_pParent;
        bool m_bSelected;
};

#endif // ELEMENT_H
