#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 20, 30, 40, 50, 70};  

    l.push_back(60);  // Add element at the end
    l.push_front(5);  // Add element at the front

    l.pop_back();  // Remove last element
    l.pop_front(); // Remove first element    
    
    return 0;
}

