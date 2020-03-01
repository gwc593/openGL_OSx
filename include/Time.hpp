//
// Created by Guy Collins on 01/03/2020.
//

#ifndef OPENGLSANDBOX_TIME_HPP
#define OPENGLSANDBOX_TIME_HPP

#include <iostream>
class Time {
private:
 Time();


public:
    ~Time();
    static Time& getInstance();
    Time(const Time&) = delete;
    void operator = (Time const&) = delete;

    static void welcome();
};


#endif //OPENGLSANDBOX_TIME_HPP
