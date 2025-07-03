#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> flist = {10, 20, 30, 40};  

    auto it = flist.begin();  // Iterator pointing to the first element

    flist.insert_after(it, 15);  // Inserts 15 after the first element

    flist.erase_after(it);  // Removes the element after the first (which is now 15)

    cout << "Forward list elements after insert and erase: ";
    for (int num : flist) {
        cout << num << " ";  // Displaying the elements of the forward list
    }
 
    return 0;
}

