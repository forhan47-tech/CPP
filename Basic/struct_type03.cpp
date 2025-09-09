#include <iostream>
#include <array>
using namespace std;

struct Student {
    string name;
    int score;
};

int main() {
    array<Student, 3> students = {{
        {"Naim", 90},
        {"Amin", 85},
        {"Rafi", 88}
    }};

    for (const auto& s : students)
        cout << s.name << " scored " << s.score << endl;
    return 0;
}
