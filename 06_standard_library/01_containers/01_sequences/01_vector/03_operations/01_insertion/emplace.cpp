#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
    Person(string n, int a) : name(n), age(a) {}
};

int main() {
    vector<Person> people;
    people.emplace(people.begin(), "Bob", 30);
    cout << people[0].name << " - " << people[0].age << endl;
}
