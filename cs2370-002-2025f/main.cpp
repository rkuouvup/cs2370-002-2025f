// have a variable f
// print the variable f
// have a variable c
// convert f to c
// print the variable c

#include <iostream>
using namespace std;

// return_value_type function_name() {}
/*int main() {
    // auto i = 5; correct
    
    // incorrect statement:
    // auto i;
    // i = 5;
    
    
    int f;
    int c = 0;
    
    cin >> f;
    // int f;
    // f = 90;
    //cout << "The F is ";
    //cout << f;
    //cout << endl;
    cout << "The F is " << f << endl;
    
    //c = (f - 32) * (5.0 / 9);
    c = (f - 32) * ((float) 5.0 / 9);
    cout << "The C is " << c << endl;
    
    
    return 0;
}*/

int main() {
    string myString;
    //myString = "Hello World";
    //cin >> myString;
    
    //cout << myString << endl;
    //cin >> myString;
    //cout << myString << endl;
    
    getline(cin, myString);
    cout << myString << endl;
    
    return 0;
}
