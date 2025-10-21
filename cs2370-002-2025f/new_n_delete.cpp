//
//  new_n_delete.cpp
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 10/20/25.
//
#include <iostream>
using namespace std;

class Point {
private:
    double x;
    double y;
public:
    Point(double x = 0.0, double y = 0.0) {
        this->x = x;
        this->y = y;
    }
    void Print() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

/*int main() {
    int i = 10;
    double d = 2.0;
    
    int *iPtr = new int;    // int* malloc(sizeof(int))
    
    cout << "&i: " << &i << endl;
    cout << "&d: " << &d << endl;
    cout << "iPtr: " << iPtr << endl;
    cout << "&iPtr: " << &iPtr << endl;
    cout << "*iPtr: " << *iPtr << endl;
    
    Point p1(3, 4);
    Point *ptr1 = new Point(6, 8);
    Point *ptr2 = new Point();
    p1.Print();
    (*ptr1).Print();
    ptr1->Print();
    
    return 0;
}*/
