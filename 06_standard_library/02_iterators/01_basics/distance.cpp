#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {5, 10, 15, 20};
    auto it1 = d.begin();
    auto it2 = d.end();

    cout << "Distance: " << (it2 - it1) << endl; 
}
