//
//  TimeHrMn.cpp
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 10/6/25.
//
#include "TimeHrMn.h"

TimeHrMn::TimeHrMn (int hours, int minutes) {
    int carry = 0;
    if (minutes < 0) {
        this->minutes = 0;
    } else if (minutes >=0 && minutes < 60) {
        this->minutes = minutes;
    } else {
        this->minutes = minutes % 60;
        carry = minutes / 60;
    }
    this->hours = hours + carry;
}

void TimeHrMn::Print() const {
    cout << hours << ":" << minutes << endl;
}

TimeHrMn TimeHrMn::operator+(TimeHrMn rhs) {
    TimeHrMn timeTotal(this->hours + rhs.hours, this->minutes + rhs.minutes);
    return timeTotal;
}

/*bool TimeHrMn::operator==(TimeHrMn rhs) {
    return (this->hours == rhs.hours) && (this->minutes == rhs.minutes);
}*/

bool operator==(const TimeHrMn& lhs, const TimeHrMn& rhs){
    return (lhs.hours == rhs.hours) && (lhs.minutes == rhs.minutes);
}
TimeHrMn operator+(int lhs, TimeHrMn rhs) {
    TimeHrMn timeTotal(lhs + rhs.hours,  rhs.minutes);
    return timeTotal;
}

