#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(10); // direct initialization
    cout << "Value = " << *ptr << endl;
    delete ptr; // free memory
}
