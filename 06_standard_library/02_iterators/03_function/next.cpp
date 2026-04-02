#include <iostream>
#include <deque>
#include <iterator>
using namespace std;

int main() {
    deque<int> d = {5,10,15,20};
    auto it1 = d.begin();

    auto it2 = next(it1, 2); // move forward 2
    cout << "Third element: " << *it2 << endl; 
}