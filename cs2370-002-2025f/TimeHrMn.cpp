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
