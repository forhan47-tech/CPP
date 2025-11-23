#include <iostream>
#include <vector>
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
    vector<Student> st(5); // Vector of 5 Student objects

    // Input loop
    for (int i = 0; i < st.size(); ++i) {
        cout << "\nStudent " << i + 1 << ":\n";
        st[i].getData();
    }

    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < st.size(); ++i) {
        st[i].showData();
    }

    return 0;
}
