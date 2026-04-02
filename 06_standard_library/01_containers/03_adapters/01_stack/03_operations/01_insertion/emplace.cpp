#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<pair<int,string>> s;
    s.emplace(1,"Alice"); // constructs in place
    s.emplace(2,"Bob");
    cout << "Top element: " << s.top().first << " -> " << s.top().second << endl; 
}
