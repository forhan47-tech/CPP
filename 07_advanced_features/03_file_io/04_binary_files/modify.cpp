#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[50];
    int age;
};

int main() {
    fstream file("student.dat", ios::in | ios::out | ios::binary);
    Student s;
    
    if (!file) {
        cerr << "Error: Could not open file!" << endl;
        return 1;
    }

    file.seekg(0);  // move read pointer  
    file.read((char*)&s, sizeof(s));

    cout << "Name: " << s.name << ", Age: " << s.age << endl;
    s.age = 25;   // update age

    file.seekp(0);  // move write pointer
    file.write((char*)&s, sizeof(s)); 

    file.close();
}
