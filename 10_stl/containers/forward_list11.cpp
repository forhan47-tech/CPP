#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> fl = {10, 10, 20, 20, 30, 30};

    fl.unique();  // Removes consecutive duplicates

    cout << "After unique: ";
    for (int num : fl) cout << num << " ";
    cout << endl;  
    return 0;
}
