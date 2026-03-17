#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;
public:
    Student(string n, int r): name(n), roll(r) {}

    bool operator==(const Student& s) {
        return (name == s.name && roll == s.roll);
    }
};

int main() {
    Student s1("Alice", 101), s2("Alice", 101), s3("Bob", 102);
    cout << (s1 == s2) << endl; 
    cout << (s1 == s3) << endl; 
}
