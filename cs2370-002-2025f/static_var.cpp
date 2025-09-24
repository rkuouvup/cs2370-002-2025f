#include <iostream>
using namespace std;

void func1() {
    int count = 0;
    count++;
    cout << count << endl;
}

void func2() {
    static int count = 0;
    count++;
    cout << count << endl;
}

/*int main() {
    func1();
    func1();
    func1();
    func1();
    func1();
    cout << "calling function with static variable" << endl;
    func2();
    func2();
    func2();
    func2();
    func2();
    return 0;
}*/
