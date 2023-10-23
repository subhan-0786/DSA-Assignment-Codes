#include <iostream>

#include "Pencil.h"

using namespace std;

Pencil::Pencil()
{
    m_color = "Red";
    m_length = 30;
}

Pencil::Pencil(string color) : m_color (color)
{
    m_length = 30;
}

Pencil::Pencil(string color, int length)
{
    m_color = color;
    m_length = length;
}

Pencil:: ~Pencil ()
{
}

Pencil & Pencil :: operator = (const Pencil & rhs)
{

    if (this == &rhs)
        return *this;
    return *this;
}

void Pencil :: print_info ()
{
    cout<<"PENCIL COLOR: " << get_color() <<endl;
    cout<<"PENCIL LENGTH: " << get_length() <<endl;
}

int Pencil :: get_length ()
{
    return m_length;
}

void Pencil::set_length(int new_length)
{
    m_length = new_length;
}

string Pencil:: get_color()
{
    return m_color;
}

void Pencil :: set_color(string new_color)
{
    m_color = new_color;
}
