//
//  generic2.cpp
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 11/17/25.
//

#include <iostream>
using namespace std;

template <typename T>
class TripleItem {
public:
    TripleItem(T v1, T v2, T v3) : v1(v1), v2(v2), v3(v3) {}
    T MaxItem();
private:
    T v1, v2, v3;
};

template <typename T>
T TripleItem<T>::MaxItem() {
    T m = v1;
    if (v2 > m) m = v2;
    if (v3 > m) m = v3;
    return m;
}



class TripleInt {
public:
    TripleInt(int v1=0, int v2=0, int v3=0) : v1(v1), v2(v2), v3(v3){}
    int MaxItem();
private:
    int v1, v2, v3;
};

int TripleInt::MaxItem() {
    int m = v1;
    if (v2 > m) m = v2;
    if (v3 > m) m = v3;
    return m;
}

int main() {
    TripleItem t1(6, 3, 4);
    TripleItem t2("World", "hello", "UVU");
    cout << t1.MaxItem() << endl;
    cout << t2.MaxItem() << endl;
    
    return 0;
}
