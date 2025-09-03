#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<int, string>> students = {
        {90, "Alice"},
        {85, "Bob"},
        {90, "Charlie"},
        {70, "Dave"}
    };

    stable_sort(students.begin(), students.end());

    cout << "Sorted by marks (stable):\n";
    for (auto& s : students)
        cout << s.first << " " << s.second << "\n";

    return 0;
}
