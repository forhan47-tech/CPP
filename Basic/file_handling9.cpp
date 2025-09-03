#include <iostream>
#include <filesystem>

using namespace std;
using namespace filesystem;

int main() {
    path oldName = "example.txt";
    path newName = "renamed_example.txt";

    try {
        rename(oldName, newName);
        cout << "File renamed successfully!\n";
    } catch (const filesystem_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

