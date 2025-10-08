//
//  TimeHrMn.h
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 10/6/25.
//
#ifndef TIMEHRMN_H
#define TIMEHRMN_H

#include <iostream>
using namespace std;

class TimeHrMn {
    friend bool operator==(const TimeHrMn& lhs, const TimeHrMn& rhs);
    friend TimeHrMn operator+(int lhs, TimeHrMn rhs);
private:
    int hours;
    int minutes;
public:
    TimeHrMn(int hours = 0, int minutes = 0);
    //int GetHours() const {return hours;}
    //int GetMinutes() const {return minutes;}
    void Print() const;
    TimeHrMn operator+(TimeHrMn rhs);
    //bool operator==(TimeHrMn rhs);
};

bool operator==(const TimeHrMn& lhs, const TimeHrMn& rhs);
TimeHrMn operator+(int lhs, TimeHrMn rhs);

#endif
