#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {1, 2, 3};
    d.clear();
    cout << "Size after clear: " << d.size() << endl; 
}
