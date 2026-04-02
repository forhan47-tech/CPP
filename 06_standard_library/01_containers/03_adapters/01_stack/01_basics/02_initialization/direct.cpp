#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    stack<int, vector<int>> s(v); // stack initialized with vector

    cout << "Top element: " << s.top() << endl; 
}
