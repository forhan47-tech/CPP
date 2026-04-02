#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    cout << "Is empty? " << (s.empty() ? "Yes" : "No") << endl;

    s.push(10);
    cout << "Is empty after push? " << (s.empty() ? "Yes" : "No") << endl;
}
