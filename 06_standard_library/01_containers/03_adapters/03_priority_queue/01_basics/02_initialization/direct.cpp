#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 30, 20};
    priority_queue<int> pq(v.begin(), v.end()); // builds heap
    cout << "Top element: " << pq.top() << endl; 
}
