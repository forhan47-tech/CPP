#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> pq1, pq2;

    pq1.push(10);
    pq1.push(20);
    pq1.push(5);

    pq2.push(40);
    pq2.push(50);

    pq1.swap(pq2);  // Swap contents

    cout << "\nAfter swap:\n";
    cout << "Top of pq1: " << pq1.top() << "\n";
    cout << "Top of pq2: " << pq2.top() << "\n";

    return 0;
}
