//
// Created by Guy Collins on 01/03/2020.
//

#include "vector2.hpp"
template <typename T>
vector2<T>::vector2()
{
    x = 0;
    y = 0;
}

template <typename T>
vector2<T>::vector2(T _x, T _y)
{
    x = _x;
    y = _y;
}

template <typename T>
vector2<T>::~vector2()
{

}


template <typename T>
T vector2<T>::distace(const vector2<T>& v1, const vector2<T>& v2)
{
    T dx,dy;

    dx = abs(v1.x - v2.x);
    dy = abs(v1.y - v2.y);

    return sqrt((dx*dx)+(dy*dy));

}

template class vector2<float>;
template class vector2<double>;