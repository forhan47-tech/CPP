#include <iostream>
#include <filesystem>

using namespace std;
using namespace filesystem;

int main() {
    path source = "example.txt";
    
    try {
        if (remove(source)) {
            cout << "File deleted successfully!\n";
        } else {
            cout << "File not found.\n";
        }
    } catch (const filesystem_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

