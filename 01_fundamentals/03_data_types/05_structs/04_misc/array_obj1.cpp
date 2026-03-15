#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;
};

int main() {
    Student st[3] = {
        {101, "Alice", 89.5},
        {102, "Bob", 76.0},
        {103, "Charlie", 92.0}
    };

    for (int i = 0; i < 3; i++) {
        cout << "ID: " << st[i].id << ", Name: " << st[i].name << ", Marks: " << st[i].marks << endl;
    }
    return 0;
}
