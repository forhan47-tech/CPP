#include <iostream>
using namespace std;

class Formatter {
public:
    void operator()(const string& name, int age) {  
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Formatter fmt;
    fmt("Alice", 25);
}
