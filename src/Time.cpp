//
// Created by Guy Collins on 01/03/2020.
//

#include "Time.hpp"

std::chrono::time_point<std::chrono::steady_clock> Time::start;
std::chrono::time_point<std::chrono::steady_clock> Time::last;
std::chrono::duration<float> Time::_dT;
std::chrono::duration<float> Time::_duration;

Time::Time()
{

}

Time::~Time()
{

}

Time& Time::getInstance()
{
    static Time instance;
    return instance;
}


void Time::init()
{
    start = std::chrono::high_resolution_clock::now();
    last = start;
    _dT = start - last;
}

void Time::endFrame()
{
    std::chrono::time_point<std::chrono::steady_clock>  now = std::chrono::high_resolution_clock::now();

    _duration = now-start;
    _dT = now - last;
    last = now;
}

float Time::dT()
{
    return _dT.count();
}

float Time::time()
{
    return _duration.count();
}