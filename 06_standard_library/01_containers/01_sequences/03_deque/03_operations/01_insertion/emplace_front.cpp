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
    d.emplace_front("Bob", 30);
    cout << d.front().name << " - " << d.front().age << endl;
}
