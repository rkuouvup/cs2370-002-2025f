//
//  favorite.cpp
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 9/29/25.
//
#include <iostream>
#include "Restaurant.h"
using namespace std;





int main() {
    Restaurant r1;
    r1.Print();
    r1.SetName("Red Tacos");
    r1.SetRating(5);
    r1.Print();
    
    Restaurant r2;
    r2.SetName("K's Kitchen");
    r2.SetRating(5);
    r2.Print();
    //cout << r.GetName() << endl;
    return 0;
}
