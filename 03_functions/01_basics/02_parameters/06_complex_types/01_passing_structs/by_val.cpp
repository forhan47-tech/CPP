#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

void showPerson(Person p) { // copy
    cout << p.name << " is " << p.age << " years old\n";
    p.age++; // modifies only the copy
}

int main() {
    Person p1 = {"Alice", 25};
    showPerson(p1);
    cout << "Outside: " << p1.age << endl; 
}
