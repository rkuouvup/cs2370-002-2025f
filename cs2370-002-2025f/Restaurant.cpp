//
//  Restaurant.cpp
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 9/29/25.
//
#include "Restaurant.h"

int Restaurant::nextId = 101;


Restaurant::Restaurant() : name("No Name"), rating(-1), id(nextId) {
    //name = "No Name";
    //rating = -1;
    //id = rand();
    nextId++;
}

Restaurant::Restaurant(string name, int rating) : id(nextId) {
    this->name = name;
    this->rating = rating;
    nextId++;
}

void Restaurant::Print() const {
    //rating = 0;
    cout << id << ": " << name << " -- " << rating << endl;
}
string Restaurant::GetName() const {
    return name;
}

void Restaurant::SetName(string name) {
    this->name = name;
}
void Restaurant::SetRating(int myRating) {
    rating = myRating;
}
