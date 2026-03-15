#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

void birthday(Person *p) { // pointer
    p->age++;
}

int main() {
    Person p1 = {"Charlie", 40};
    birthday(&p1); // pass address
    cout << p1.name << " is now " << p1.age << endl;
}
