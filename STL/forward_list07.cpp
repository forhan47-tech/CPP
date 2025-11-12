#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> fl = {10, 20, 30, 40};  

    auto it = fl.begin();  
    fl.insert_after(it, 15);  // Inserts 15 after the first element
    
    fl.erase_after(it);  // Removes the element after the first (which is now 15)

    cout << "Forward list elements after insert and erase: ";
    for (int num : flist) {
        cout << num << " ";  
    } 
    return 0;
}

