#include <iostream>
using namespace std;

enum class Level { 
    Low, Medium, High 
};

void checkLevel(Level l) {  // copy
    if (l == Level::High) {
        cout << "Danger!" << endl;
    } else {
        cout << "Safe." << endl;
    }
}

int main() {
    checkLevel(Level::High);
    return 0;
}
