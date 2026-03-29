#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {5, 10, 15, 20};
    for (int x : d) cout << x << " "; 
}
