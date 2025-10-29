#include "vect2.hpp"

vect2::vect2() : x(0), y(0)
{}

vect2::vect2(int x, int y) : x(x), y(y)
{}

vect2::vect2(const vect2 &other) : x(other.x), y(other.y)
{}
vect2 &vect2::operator=(const vect2 &other)
{
    if (this != &other)
    {
        this->x = other.x;
        this->y = other.y;
    }
    return *this;
}

vect2::~vect2()
{}

int &vect2::operator[](int index)
{
    if (index == 0)
        return x;
    return y;
}

const int &vect2::operator[](int index) const
{
    if (index == 0)
        return x;
    return y;
}