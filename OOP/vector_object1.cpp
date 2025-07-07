#include <vector>
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
    void showData() const {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    vector<Student> students;
    int n;
    cout << "How many students? ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Student s;
        s.getData();
        students.push_back(s); // Add object to vector
    }

    cout << "\nStudent Details:\n";
    for (const auto& s : students) {
        s.showData();
    }

    return 0;
}
