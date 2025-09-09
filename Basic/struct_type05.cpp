#include <iostream>
#include <map>
using namespace std;

struct Student {
    string name;
    int marks;
};

int main() {
    map<int, Student> students;

    students[101] = {"Naim", 95};
    students[102] = {"Amin", 88};

    for (const auto& [id, s] : students)
        cout << "ID: " << id << ", Name: " << s.name << ", Marks: " << s.marks << endl;
    return 0;
}
