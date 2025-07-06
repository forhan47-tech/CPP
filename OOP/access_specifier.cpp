#include <iostream>
using namespace std;

class Person {
public:
    string name;               // Public: freely accessible

private:
    int age;                   // Private: hidden from outside

protected:
    string nationality;        // Protected: visible to subclasses

public:
    void setAge(int a) {
        age = a;               // controlled access
    }

    void setNationality(string nat) {
        nationality = nat;     // controlled access
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Citizen : public Person {
public:
    void showNationality() {
        cout << "Nationality: " << nationality << endl; // accessible via protected
    }
};

int main() {
    Citizen c;
    c.name = "Naimuddin";
    c.setAge(21);
    c.setNationality("Bangladeshi");

    c.display();
    c.showNationality();

    return 0;
}
