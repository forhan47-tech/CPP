#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    priority_queue<pair<int,string>> pq;
    pq.emplace(2,"Alice"); // constructs in place
    pq.emplace(5,"Bob");
    pq.emplace(3,"Charlie");

    cout << "Top element: " << pq.top().first << " -> " << pq.top().second << endl; // 5 -> Bob
}
