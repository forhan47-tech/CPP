#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    cout << "Is empty? " << (q.empty() ? "Yes" : "No") << endl;

    q.push(10);
    cout << "Is empty after push? " << (q.empty() ? "Yes" : "No") << endl;
}
