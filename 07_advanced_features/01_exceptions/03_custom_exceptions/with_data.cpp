#include <iostream>
#include <exception>
using namespace std;

class MathException : public exception {
    string msg;
public:
    MathException(string m) : msg(m) {}
    const char* what() const noexcept override {
        return msg.c_str(); // return custom message
    }
};

int divide(int a, int b) {
    if (b == 0) throw MathException("Division by zero!");
    return a / b;
}

int main() {
    try {
        cout << divide(10, 0);
    } catch (MathException &e) {
        cout << "Caught: " << e.what() << endl;
    }
}
