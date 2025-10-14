//
//  except.cpp
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 10/13/25.
//
#include <iostream>
using namespace std;

int main() {
    try {
        //throw 20;
        throw out_of_range("Error in line 13");
    } catch (int e) {
        cout << "An exception occurred: " << e << endl;
    } catch (out_of_range &ex) {
        cout << "Error: " << ex.what() << endl;
    }
    
    return 0;
}
