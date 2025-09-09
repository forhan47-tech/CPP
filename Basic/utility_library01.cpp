#include <iostream>
#include <utility>  
using namespace std;

int main() {
    int a = 10, b = 20;

    swap(a, b); // Using std::swap
    
    cout << "After Swap: a = " << a << ", b = " << b << endl; 
    return 0;
}

