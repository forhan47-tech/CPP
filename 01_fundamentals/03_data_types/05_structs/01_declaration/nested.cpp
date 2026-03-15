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
    Student s1; // create object

    s1.id = 101;
    s1.name = "Alice";
    s1.addr.city = "Los Angeles";
    s1.addr.zip = 90001;
    
    cout << "ID: " << s1.id << ", Name: " << s1.name << ", City: " << s1.addr.city << ", ZIP: " << s1.addr.zip << endl;
    return 0;
}
