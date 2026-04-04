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
    cout << "Name: " << s1.name << ", City: " << s1.addr.city << ", ZIP: " << s1.addr.zip << endl;
    return 0;
}
