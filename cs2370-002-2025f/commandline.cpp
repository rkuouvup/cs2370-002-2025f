//
//  commandline.cpp
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 10/27/25.
//
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "argc: " << argc << endl;
    
    for (int i = 0; i < argc; i++)
        cout << "argv[" << i << "]: " << argv[i] << endl;
    
    return 0;
}
