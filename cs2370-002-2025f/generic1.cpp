//
//  generic1.cpp
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 11/17/25.
//

#include <iostream>
using namespace std;

int maximumInt(int v1, int v2, int v3) {
    int m = v1;
    if (v2 > m)
        m = v2;
    if (v3 > m)
        m = v3;
    return m;
}

// template <class TheType>
template <typename T>
T maximum(T v1, T v2, T v3) {
    T m = v1;
    if (v2 > m)
        m = v2;
    if (v3 > m)
        m = v3;
    return m;
}



/*int main() {
    //cout << "max of 6, 2, 8: " << maximumInt(6, 2, 8) << endl;
    //cout << "max of hi, world, uvu: " << maximumInt("hi", "world", "uvu") << endl;
    
    cout << "max of 6, 2, 8: " << maximum(6, 2, 8) << endl;
    cout << "max of hi, world, uvu: " << maximum("hi", "world", "uvu") << endl;
    return 0;
}*/
