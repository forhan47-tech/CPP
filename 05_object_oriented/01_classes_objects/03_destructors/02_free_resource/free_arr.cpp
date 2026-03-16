#include <iostream>
using namespace std;

class Student {
private:
    int* scores;
    int size;
public:
    Student(int n) {
        size = n;
        scores = new int[size];   // allocate array
        cout << "Constructor allocated array!" << endl;
    }

    ~Student() {
        delete[] scores;   // free array memory
        cout << "Destructor freed array!" << endl;
    }

    void showSize() { 
        cout << "Array size: " << size << endl; 
    }
};

int main() {
    Student s1(5);
    s1.showSize();
    return 0;
}
