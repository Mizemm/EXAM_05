#pragma once

#include <iostream>

class vect2
{
    private:
        int x, y;
    public:
        vect2();
        vect2(int x, int y);
        vect2(const vect2 &other);
        vect2& operator=(const vect2 &other);
        ~vect2();
        
};