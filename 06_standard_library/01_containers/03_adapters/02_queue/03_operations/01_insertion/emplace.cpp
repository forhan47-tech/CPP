#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<pair<int,string>> q;
    q.emplace(1,"Alice"); // constructs in place
    q.emplace(2,"Bob");
    cout << "Back element: " << q.back().first << " -> " << q.back().second << endl; // 2 -> Bob
}
