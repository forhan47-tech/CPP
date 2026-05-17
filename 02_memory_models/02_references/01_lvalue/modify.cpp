#include <iostream>
using namespace std;

int main() {
    int x = 20;    
    int& r = x;  
    cout << "r = " << r << endl; 
    r = 50;    // modifies x 
    cout << "x = " << x << endl; 
}
