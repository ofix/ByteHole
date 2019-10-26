#ifndef VISUALOBJECT_H
#define VISUALOBJECT_H

#include <wx/string.h>

class VisualObject
{
    public:
        VisualObject(wxString type =wxT("VisualObject"),int x=0,int y=0,int w=0,int h=0,double scale_ratio=0,double rotate_angle = 0);
        virtual ~VisualObject();
        int GetX();
        void SetX(int x);
        int GetY();
        void SetY(int y);
        int GetWidth();
        void SetWidth(int width);
        int GetHeight();
        void SetHeight(int height);
        VisualObject* GetParent();
        bool IsInGroup();
        wxString GetType();
        bool CompareTo(VisualObject* pObject);
        VisualObject* Clone();

        void Rotate(double angle);
        void RotateTo(double angle);
        void RotateLeft(double angle);
        void RotateRight(double angle);
        void Move(int xOffset, int yOffset);
        void MoveTo(int xPos, int yPos);
        void ZoomIn(double scale_ratio);
        void ZoomOut(double scale_ratio);

        wxString Serialize();
        VisualObject* UnSerialize();


    protected:
        wxString m_type;
        int m_x;
        int m_y;
        int m_w;
        int m_h;
        double m_scaleRatio;
        double m_rotateAngle;
        bool m_bRotate;
        bool m_bIsGroup;
        VisualObject* m_pParent;
};

#endif // VISUALOBJECT_H
