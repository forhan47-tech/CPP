#include <iostream>
#include <queue>
using namespace std;

struct Task {
    string name;
    int duration;
};

int main() {
    queue<Task> tasks;

    tasks.push({"Compile", 5});
    tasks.push({"Link", 3});

    while (!tasks.empty()) {
        Task t = tasks.front();
        cout << "Task: " << t.name << ", Duration: " << t.duration << endl;
        tasks.pop();
    }

    return 0;
}
