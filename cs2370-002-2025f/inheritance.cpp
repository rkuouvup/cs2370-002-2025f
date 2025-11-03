//
//  inheritance.cpp
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 11/3/25.
//
#include <iostream>
#include <string>
using namespace std;

class Business {
public:
    void SetName(string busName) {name = busName;}
    void SetAddress(string busAddress) {address = busAddress;}
    string GetDescription() const {return name + "--" + address;}
protected:
    string name;
    string address;
};

class Restaurant : public Business {
public:
    void SetRating(int userRating) {rating = userRating;}
    int GetRating() const {return rating;}
    
    void DisplayRestaurant() {
        cout << name << "--" << address << ": " << rating << endl;
    }
private:
    int rating;
};

int main() {
    Business b1;
    Restaurant r1;
    
    b1.SetName("My Buiness"); b1.SetAddress("some addr");
    r1.SetName("Restaurant"); r1.SetAddress("Orem"); r1.SetRating(5);
    
    cout << b1.GetDescription() << endl;
    //cout << r1.GetDescription() << endl;
    //cout << "  rating: " << r1.GetRating() << endl;
    r1.DisplayRestaurant();
    
    
    return 0;
}





