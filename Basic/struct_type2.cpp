#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

// Using pointer to a struct
int main() {
    Student *s = new Student; // Allocating memory dynamically

    s->name = "Alice"; // Using arrow operator
    s->age = 20;

    cout << s->name << " - " << s->age << endl;

    delete s; // Free memory
    return 0;
}
