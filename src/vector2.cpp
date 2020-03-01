//
// Created by Guy Collins on 01/03/2020.
//

#include "vector2.hpp"
vector2::vector2()
{
    x = 0;
    y = 0;
}

vector2::vector2(float _x, float _y)
{
    x = _x;
    y = _y;
}

vector2::~vector2()
{

}


float vector2::distace(const vector2 &v1, const vector2 &v2)
{
    float dx,dy;

    dx = abs(v1.x - v2.x);
    dy = abs(v1.y - v2.y);

    return sqrt((dx*dx)+(dy*dy));

}