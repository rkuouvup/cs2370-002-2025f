//
//  pts.cpp
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 9/24/25.
//
#include <iostream>
#include "point.h"
using namespace std;



int main() {
    //int i = 0;
    point_t p1 = {3.0, 4.0};
    point_t p2 = {5.6, 7.8};
    //p2.x = 0.0;
    //p2.y = 0.0;
    init_point(p2, 0, 0);
    
    cout << "distance between p1 and p2 is " << distance(p1, p2) << endl;
    return 0;
}
