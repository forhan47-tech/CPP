#include <iostream>
#include <forward_list>
using namespace std; 

int main() {
    forward_list<int> fl = {10, 20, 30, 40};  

    fl.push_front(5);  // Adding an element to the front
    fl.pop_front();  // Removing the first element

    cout << "Forward list elements after modifications: ";
    for (int num : fl) {
        cout << num << " ";  
    }  
    return 0;
}

