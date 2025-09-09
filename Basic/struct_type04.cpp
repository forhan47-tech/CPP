#include <iostream>
#include <deque>
using namespace std;

struct Task {
    string name;
    int priority;
};

int main() {
    deque<Task> tasks = {
        {"Compile", 2},
        {"Link", 1},
        {"Test", 3}
    };

    tasks.emplace_back("Link", 3);

    for (const auto& t : tasks)
        cout << "Task: " << t.name << ", Priority: " << t.priority << endl;
    return 0;
}
