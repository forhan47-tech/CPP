#include <iostream>
#include <queue>
#include <sstream>

using namespace std;

int main() {
    queue<int> q;
    string input;
    int num;

    cout << "Enter numbers separated by spaces: ";
    getline(cin, input);  // Read entire line

    stringstream ss(input);
    while (ss >> num) {
        q.push(num);
    }

    cout << "Queue elements (FIFO order): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
