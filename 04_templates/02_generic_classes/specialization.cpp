#include <iostream>
using namespace std;

template <typename T>
class Printer {
public:
    void print(T data) { 
        cout << data << endl; 
    }
};

// Specialization for bool
template <>
class Printer<bool> {
public:
    void print(bool data) {
        cout << (data ? "True" : "False") << endl;
    }
};

int main() {
    Printer<int> p1;
    Printer<bool> p2;

    p1.print(42);   
    p2.print(true);  
}
