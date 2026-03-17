#include <iostream>
using namespace std;

class Matrix {
    int val;
public:
    Matrix(int v=0) : val(v) {}

    Matrix operator*(const Matrix &m) {
        return Matrix(val * m.val);
    }

    void display() { 
        cout << val << endl; 
    }
};

int main() {
    Matrix m1(5), m2(3);
    Matrix m3 = m1 * m2;   // Calls overloaded *
    m3.display();        
}
