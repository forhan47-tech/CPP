#include <iostream>
using namespace std;

int main() {
    int* ptr = new int();   // value-initialized to 0
    cout << *ptr << endl; 
    delete ptr;
}
