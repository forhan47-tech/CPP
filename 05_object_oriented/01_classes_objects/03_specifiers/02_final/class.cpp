#include <iostream>
using namespace std;

class Base final {   // Cannot be inherited
public:
    void show() {
        cout << "Base class function" << endl;
    }
};

int main() {
    Base obj;
    obj.show();
}
