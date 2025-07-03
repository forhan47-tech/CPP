#include <iostream>
#include <queue>
#include <sstream>

using namespace std;

int main() {
    priority_queue<int> pq;
    string input;
    int num;

    cout << "Enter numbers separated by spaces: ";
    getline(cin, input);  // Read entire line

    stringstream ss(input);
    while (ss >> num) {
        pq.push(num);
    }

    cout << "Priority queue elements (sorted order): ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
