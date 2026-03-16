#include <iostream>
using namespace std;

class Student {
public:
    static int count;  // data member (shared)

    Student() {
        count++; 
    }
};

int Student::count = 0; // Initialize outside class

int main() {
    Student s1, s2, s3;   // create 3 objects
    cout << "Total students created: " << Student::count << endl;
}