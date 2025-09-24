//
//  point.h
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 9/24/25.
//
#ifndef POINT_H
#define POINT_H

#include <cmath>

struct point_t {
    double x;
    double y;
};

double distance(point_t& p, point_t& q);
void init_point(point_t& pt, double x, double y);

#endif
