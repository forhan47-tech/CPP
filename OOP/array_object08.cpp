#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;
public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }
    
    void showData() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student st[3]; 

    for (int i = 0; i < 3; ++i) {
        cout << "Student " << i + 1 << endl;
        st[i].getData();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 3; ++i) {
        st[i].showData();
    }
    return 0;
}
