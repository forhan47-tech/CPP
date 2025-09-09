#include <iostream>
#include <filesystem>
using namespace std;
using namespace std::filesystem;

int main() {
    try {
        rename("oldname.txt", "newname.txt");
        cout << "File renamed successfully." << endl;
    } catch (const filesystem_error& e) {
        cerr << "Error renaming file: " << e.what() << endl;
    }

    return 0;
}
