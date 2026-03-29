#include <iostream>
#include <deque>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
    Person(string n, int a) : name(n), age(a) {}
};

int main() {
    deque<Person> d;
    d.emplace(d.begin(), "Charlie", 40);
    cout << d[0].name << " - " << d[0].age << endl;
}
