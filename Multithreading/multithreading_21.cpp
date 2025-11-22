#include <iostream>
#include <thread>
#include <vector>
using namespace std;

void task(int id) {
    cout << "Task " << id << " running\n";
}

int main() {
    vector<thread> pool;

    // Launch 4 threads
    for (int i = 0; i < 4; ++i) {
        pool.emplace_back(task, i);
    }

    // Wait for all threads to finish
    for (auto& t : pool) {
        t.join();
    }
    cout << "All tasks completed\n";
    return 0;
}
