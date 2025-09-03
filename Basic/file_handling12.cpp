#include <iostream>
#include <filesystem>

using namespace std;
using namespace filesystem;

int main() {
    path source = "example.txt";
    path destination = "copy_example.txt";

    try {
        copy_file(source, destination, copy_options::overwrite_existing);
        cout << "File copied successfully!\n";
    } catch (const filesystem_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

