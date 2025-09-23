#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

void updateString(string& s, int i) {
    s.at(i) = toupper(s.at(i));
}

void updateVector(vector<int>& v, int d) {
    for (int& e : v)
        e = e * d;
}

void updateArray(int a[], int value, int size) {
    for (int i = 0; i < size; i++)
        a[i] = a[i] + value;
}

/*int main() {
    string s = "Hello";
    vector<int> v = {1, 2, 3, 4, 5};
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(int);
    cout << "sizeof(a) in the main: " << sizeof(a) << endl;
    
    updateArray(a, 100, size);
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
    
    updateVector(v, 10);
    for (auto e : v)
        cout << e << " ";
    cout << endl;
    
    
    
    updateString(s, 2);
    cout << "s: " << s << endl;
    
    return 0;
}*/
