#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

void birthday(Person &p) { // reference
    p.age++;
}

int main() {
    Person p1 = {"Bob", 30};
    birthday(p1);
    cout << p1.name << " is now " << p1.age << endl; 
}
