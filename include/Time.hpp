//
// Created by Guy Collins on 01/03/2020.
//

#ifndef OPENGLSANDBOX_TIME_HPP
#define OPENGLSANDBOX_TIME_HPP

#include <iostream>
#include<chrono>
class Time {
private:
 Time();
    static std::chrono::time_point<std::chrono::steady_clock> start;
    static std::chrono::time_point<std::chrono::steady_clock> last;
    static std::chrono::duration<float> _dT;
    static std::chrono::duration<float> _duration;

public:
    ~Time();

    static Time& getInstance();

    static void init();

    static void endFrame();

    Time(const Time&) = delete;
    void operator = (Time const&) = delete;


    static float dT();
    static float time();

};


#endif //OPENGLSANDBOX_TIME_HPP
