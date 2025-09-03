#include <iostream>
#include <utility>  
using namespace std;

int main() {
    // Using std::swap
    int a = 10, b = 20;
    cout << "Before Swap: a = " << a << ", b = " << b << endl;

    swap(a, b); 
    cout << "After Swap: a = " << a << ", b = " << b << endl;
    

    // Using std::move
    string s1 = "Hello, World!";
    string s2 = move(s1);  // Move s1 into s2

    cout << "s1 after move: " << s1 << endl;  // Undefined or empty
    cout << "s2 now owns the string: " << s2 << endl;


    return 0;
}

