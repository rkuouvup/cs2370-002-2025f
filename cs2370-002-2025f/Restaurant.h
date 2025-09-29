//
//  Restaurant.h
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 9/29/25.
//
#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <iostream>
using namespace std;

class Restaurant {
private:
    string name = "No Name";
    int rating = -1;
public:
    string GetName();
    void Print();
};



#endif
