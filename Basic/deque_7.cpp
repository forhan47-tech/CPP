#include <iostream>
#include <deque>
#include <sstream>

using namespace std;

int main() {
    deque<int> dq;
    string input;
    int num;

    cout << "Enter numbers separated by spaces: ";
    getline(cin, input);  // Read entire line

    stringstream ss(input);
    while (ss >> num) {
        dq.push_back(num);
    }

    cout << "Deque elements: ";
    for (int num : dq) cout << num << " ";

    return 0;
}
