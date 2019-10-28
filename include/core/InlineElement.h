#ifndef INLINEELEMENT_H
#define INLINEELEMENT_H

#include <core/Element.h>

class InlineElement:public Element
{
    public:
        InlineElement();
        virtual ~InlineElement();
        void SetPadding(int padding);
        void SetPaddingLeft(int padding_left);
        void SetPaddingTop(int padding_top);
        void SetPaddingRight(int padding_right);
        void SetPaddingBottom(int padding_bottom);
        int* GetPadding();
        int GetPaddingLeft();
        int GetPaddingTop();
        int GetPaddingRight();
        int GetPaddingBottom();
    protected:
        int m_padding[4];
};

#endif // INLINEELEMENT_H
