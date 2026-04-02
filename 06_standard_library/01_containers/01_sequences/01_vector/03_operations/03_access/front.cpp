#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {100, 200, 300};
    cout << "Front element: " << v.front() << endl; 
    v.front() = 999; // modify
    cout << "Modified front: " << v.front() << endl; 
}
