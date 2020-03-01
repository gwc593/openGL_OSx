//
// Created by Guy Collins on 01/03/2020.
//

#ifndef OPENGLSANDBOX_VECTOR2_HPP
#define OPENGLSANDBOX_VECTOR2_HPP

#include <math.h>

template <typename T>
class vector2 {
public:
    T x,y;

    //constructors and destructor
    vector2();
    vector2(T _x, T _y);
    ~vector2();

    static T distace (const vector2<T>& v1, const vector2<T>& v2);
};




#endif //OPENGLSANDBOX_VECTOR2_HPP
