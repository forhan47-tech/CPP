#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> stack;

    // Push
    stack.push_back(10);
    stack.push_back(20);
    stack.push_back(30);

    // Pop
    while (!stack.empty()) {
        cout << "Top: " << stack.back() << endl;
        stack.pop_back();
    }

    return 0;
}
