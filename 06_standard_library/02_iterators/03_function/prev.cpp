#include <iostream>
#include <deque>
#include <iterator>
using namespace std;

int main() {
    deque<int> d = {5,10,15,20};
    auto it1 = d.end();

    auto it2 = prev(it1, 2); // move backward 2
    cout << "Second last element: " << *it2 << endl; 
}
