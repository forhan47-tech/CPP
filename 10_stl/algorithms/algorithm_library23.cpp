#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a = 10, b = 20;
    
    // Finding maximum and minimum between a and b
    cout << "Max: " << max(a, b) << endl;  
    cout << "Min: " << min(a, b) << endl; 

    // Swapping values of a and b
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl; 

    return 0;
}

