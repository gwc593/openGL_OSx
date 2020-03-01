//
// Created by Guy Collins on 01/03/2020.
//

#ifndef OPENGLSANDBOX_VECTOR2_HPP
#define OPENGLSANDBOX_VECTOR2_HPP

#include <math.h>
class vector2 {
public:
    float x,y;

    //constructors and destructor
    vector2();
    vector2(float _x, float _y);
    ~vector2();

    static float distace (const vector2& v1, const vector2& v2);
};


#endif //OPENGLSANDBOX_VECTOR2_HPP
