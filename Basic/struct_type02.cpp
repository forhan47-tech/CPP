#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    Student *s = new Student; // Allocating memory dynamically

    s->name = "Alice"; 
    s->age = 20;

    cout << s->name << " - " << s->age << endl;
    delete s; // Free memory
    return 0;
}
