#include <iostream>
using namespace std;

class Student {
    int roll;   // private member
public:
    void setRoll(int r) { 
        roll = r; 
    }

    int getRoll() { 
        return roll; 
    }
};

int main() {
    Student s1;
    s1.setRoll(101);   // ✅ Access via public function
    cout << "Roll Number: " << s1.getRoll() << endl;
}
