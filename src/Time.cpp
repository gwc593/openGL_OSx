//
// Created by Guy Collins on 01/03/2020.
//

#include "Time.hpp"

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

void Time::welcome()
{
    std::cout <<  "singleton working" << std::endl;
}