#include <iostream>
using namespace std;

class Printer {
public:
    void operator()(string msg) {  
        cout << "Message: " << msg << endl;
    }
};

int main() {
    Printer pt;
    pt("Hello Functor!"); 
}
