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
    Student st[2] = {
        {101, "Alice", {"Los Angeles", 90001}},
        {102, "Bob", {"New York", 10001}}
    };

    for (int i = 0; i < 2; i++) {
        cout << "ID: " << st[i].id << ", Name: " << st[i].name 
             << ", City: " << st[i].addr.city << ", ZIP: " << st[i].addr.zip << endl;
    }
    return 0;
}
