#include <iostream>
using namespace std;

class Student {
public:
    static int count;  // static data member (shared)

    Student() {
        count++;   // increment shared counter
    }
};

int Student::count = 0; // Initialize static member outside class

int main() {
    Student s1, s2, s3;   // create 3 objects
    cout << "Total students created: " << Student::count << endl;
}
