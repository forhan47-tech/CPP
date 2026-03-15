#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception {
public:
    const char* what() const noexcept override {
        return "Custom exception occurred!"; // custom message
    }
};

int main() {
    try {
        throw MyException(); // throwing 
    } catch (MyException &e) {
        cout << "Caught: " << e.what() << endl; // catching
    }
}
