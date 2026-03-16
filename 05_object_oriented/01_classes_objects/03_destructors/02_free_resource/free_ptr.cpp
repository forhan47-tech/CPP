#include <iostream>
using namespace std;

class Student {
private:
    int* marks;
public:
    Student(int m) {
        marks = new int(m);   // allocate memory
        cout << "Constructor allocated memory!" << endl;
    }

    ~Student() {
        delete marks;   // free memory
        cout << "Destructor freed memory!" << endl;
    }

    void show() { 
        cout << "Marks: " << *marks << endl; 
    }
};

int main() {
    Student s1(95);
    s1.show();
    return 0;
}
