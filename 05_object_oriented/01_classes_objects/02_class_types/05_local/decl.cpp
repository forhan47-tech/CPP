#include <iostream>
using namespace std;

void task() {
    class Local {   // Local class
    public:
        void display() {
            cout << "This is a Local class inside demoFunction" << endl;
        }
    };

    Local obj;  // Object
    obj.display();
}

int main() {
    task();  // Call function
    return 0;
}
