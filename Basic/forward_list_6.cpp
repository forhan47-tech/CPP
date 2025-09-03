#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> fl = {10, 20, 30, 40, 50}; // Initialize forward list

    cout << "First element: " << fl.front() << endl;

    fl.clear(); // Clear the forward list
    
    cout << "Is the forward list empty? " << (fl.empty() ? "Yes" : "No") << endl;
    
    return 0;
}
