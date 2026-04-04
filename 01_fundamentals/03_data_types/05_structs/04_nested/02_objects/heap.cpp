#include <iostream>
using namespace std;

struct Address {
    string city;
    int zip;
};

struct Student {
    int id;
    string name;
    Address addr; // nested struct
};

int main() {
    Student s1 = {104, "David", {"Chattogram", 4000}};
    Student* ptr = &s1; // pointer to struct
    cout << "ID: " << ptr->id << ", Name: " << ptr->name << ", City: " << ptr->addr.city << ", ZIP: " << ptr->addr.zip << endl;
    return 0;
}
