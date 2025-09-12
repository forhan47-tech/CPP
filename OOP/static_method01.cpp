#include <iostream>
using namespace std;

class Utility {  
public:
    static void greet() { // Static utility method
        cout << "Hello, static world!" << endl;
    }
    Utility() = delete; // Prevent instantiation
};

int main() {
    // Utility u;       // ❌ Error: constructor is deleted
    Utility::greet();  // ✅ Works: static method called directly
    return 0;
}
