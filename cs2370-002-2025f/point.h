//
//  point.h
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 9/24/25.
//
#ifndef POINT_H
#define POINT_H

#include <vector>
#include <cmath>
using namespace std;


struct point_t {
    double x;
    double y;
};

double distance(point_t& p, point_t& q);
void init_point(point_t& pt, double x, double y);
void dist_to_origin(point_t p[], int len, double d[]);
void vdist_to_origin(vector<point_t>& p, vector<double>& d);

#endif
