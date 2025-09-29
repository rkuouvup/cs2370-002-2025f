//
//  point.cpp
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 9/24/25.
//
#include "point.h"
double distance(point_t& p, point_t& q) {
    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}

void init_point(point_t& pt, double x, double y) {
    pt.x = x;
    pt.y = y;
}

void dist_to_origin(point_t p[], int len, double d[]) {
    point_t org = {0.0, 0.0};
    for (int i = 0; i < len; i++)
        d[i] = distance(p[i], org);
}

void vdist_to_origin(vector<point_t>& p, vector<double>& d) {
    point_t org = {0.0, 0.0};
    for (int i = 0; i < p.size(); i++)
        d[i] = distance(p[i], org);
}
