#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[50];
    int age;
};

int main() {
    ifstream in("student.dat", ios::binary); 
    Student s;

    if (!in) {
        cerr << "Error: Could not open file!" << endl;
        return 1;
    }

    while (in.read((char*)&s, sizeof(s))) {
        cout << "Name: " << s.name << ", Age: " << s.age << endl; // read binary data
    }

    in.close(); 
}
