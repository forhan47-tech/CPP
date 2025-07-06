#include <iostream>
using namespace std;

class File {
public:
    // Constructor simulates opening a file
    File() {
        cout << "File opened" << endl;
    }

    // Destructor simulates closing a file
    ~File() {
        cout << "File closed" << endl;
    }
};

int main() {
    // Create a scope to observe constructor/destructor timing
    {
        File f1;
        cout << "Working with file..." << endl;
    } // f1 goes out of scope here, triggering destructor

    cout << "End of program." << endl;

    return 0;
}
