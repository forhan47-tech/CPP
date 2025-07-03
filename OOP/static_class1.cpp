#include <iostream>
using namespace std;

class Utility {
public:
    static void greet() {
        cout << "Hello, static world!" << endl;
    }
};

int main() {
    Utility::greet();  // No object needed
    return 0;
}
