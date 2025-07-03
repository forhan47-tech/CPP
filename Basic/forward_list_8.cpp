#include <iostream>
#include <forward_list>

using namespace std; 

int main() {
    forward_list<int> flist = {10, 20, 30, 40};  // Declaring a forward list

    flist.push_front(5);  // Adding an element to the front

    flist.pop_front();  // Removing the first element

    flist.remove(20);  // Removing the element with value 20

    cout << "Forward list elements after modifications: ";
    for (int num : flist) {
        cout << num << " ";  // Displaying the elements of the forward list
    }
    
    return 0;
}

