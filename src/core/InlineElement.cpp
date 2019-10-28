#include "core/InlineElement.h"

InlineElement::InlineElement()
{

}
InlineElement::~InlineElement()
{

}
void InlineElement::SetPadding(int padding)
{
   m_padding[0] = padding;
   m_padding[1] = padding;
   m_padding[2] = padding;
   m_padding[3] = padding;
}
void InlineElement::SetPaddingLeft(int padding_left)
{
    m_padding[0] = padding_left;
}
void InlineElement::SetPaddingRight(int padding_right)
{
    m_padding[2] = padding_right;
}
void InlineElement::SetPaddingTop(int padding_top)
{
    m_padding[1] = padding_top;
}
void InlineElement::SetPaddingBottom(int padding_bottom)
{
    m_padding[3] = padding_bottom;
}
int* InlineElement::GetPadding()
{
    return m_padding;
}
int InlineElement::GetPaddingLeft()
{
    return m_padding[0];
}
int InlineElement::GetPaddingRight()
{
    return m_padding[2];
}
int InlineElement::GetPaddingTop()
{
    return m_padding[1];
}
int InlineElement::GetPaddingBottom()
{
    return m_padding[2];
}
