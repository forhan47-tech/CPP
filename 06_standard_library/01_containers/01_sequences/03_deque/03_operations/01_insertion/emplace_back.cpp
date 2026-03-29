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
    d.emplace_back("Alice", 25);
    cout << d.back().name << " - " << d.back().age << endl;
}
