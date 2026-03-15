#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[50];
    int age;
};

int main() {
    ofstream out("student.dat", ios::binary);
    Student s = {"Alice", 20};

    if (!out) {
        cerr << "Error: Could not open file!" << endl;
        return 1;
    }

    out.write((char*)&s, sizeof(s)); // write binary data
    out.close();
}
