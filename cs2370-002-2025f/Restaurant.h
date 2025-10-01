//
//  Restaurant.h
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 9/29/25.
//
#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <iostream>
#include <cstdlib>
using namespace std;

class Restaurant {
private:
    string name;
    int rating;
    const int id;
public:
    Restaurant();
    string GetName() const;
    void SetName(string name);
    void SetRating(int myRating);
    void Print() const;
};



#endif
