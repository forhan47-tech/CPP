#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

void printPerson(const Person &p) { // safe, efficient
    cout << p.name << " is " << p.age << " years old\n";
}

int main() {
    Person p1 = {"Diana", 22};
    printPerson(p1);
}
