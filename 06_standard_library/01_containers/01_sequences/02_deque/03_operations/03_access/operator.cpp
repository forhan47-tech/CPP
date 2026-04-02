#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {10, 20, 30};
    cout << "Element at index 1: " << d[1] << endl; 
    d[1] = 99; // modify
    cout << "Modified element at index 1: " << d[1] << endl; 
}
