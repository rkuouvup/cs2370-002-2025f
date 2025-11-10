//
//  inheritance.cpp
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 11/3/25.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Business {
public:
    void SetName(string busName) {name = busName;}
    void SetAddress(string busAddress) {address = busAddress;}
    virtual string GetDescription() const {return name + "--" + address;}
    virtual string GetHours() const = 0;
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
    string GetDescription() const override {
        return Business::GetDescription() + ": Rating(" + to_string(rating) + ")";
    }
    
    string GetHours() const override {
        return "open";
    }
private:
    int rating;
};

void DriveTo(Business *b) {
    cout << "Drive to " << b->GetDescription() << endl;
}

/*int main() {
    //Business b1;
    Restaurant r1;
    Business* bptr = &r1;
    
    //b1.SetName("My Buiness"); b1.SetAddress("some addr");
    r1.SetName("Restaurant"); r1.SetAddress("Orem"); r1.SetRating(5);
    
    cout << r1.GetHours() << endl;
    cout << bptr->GetHours() << endl;
    
    //cout << "b1: " << b1.GetDescription() << endl;
    //cout << r1.GetDescription() << endl;
    //cout << "  rating: " << r1.GetRating() << endl;
    //r1.DisplayRestaurant();
    //cout << "r1: " << r1.GetDescription() << endl;
    
    //DriveTo(&b1);
    //DriveTo(&r1);
    
    //vector<Business*> v;
    //v.push_back(&b1);
    //v.push_back(&r1);
    
    //for (auto e : v) {
    //    cout << e->GetDescription() << endl;
    //}
    
    return 0;
}*/





