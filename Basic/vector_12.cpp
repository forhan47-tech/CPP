#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    cout << "First element: " << v.front() << endl;

    cout << "Last element: " << v.back() << endl; 

    cout << "Third element (safe access): " << v.at(2) << endl;

    v[2] = 100; // Modify third element using direct access
    cout << "Modified third element: " << v[2] << endl;

    return 0;
}

