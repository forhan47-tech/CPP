#include <iostream>
using namespace std;

int main() {
    int&& r = 10; // reference to object
    
    cout << "Before = " << r << endl;  
    r = 25;   // modifies values
    cout << "After = " << r << endl;
}