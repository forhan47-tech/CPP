#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> marks = {
        {"Alice", 90},
        {"Bob", 85},
        {"Charlie", 92}
    };

    // Add 5 bonus points to each student
    for (auto& [name, score] : marks) {
        score += 5;
    }

    // Display updated marks
    for (const auto& [name, score] : marks) {
        cout << name << ": " << score << endl;
    }

    return 0;
}
