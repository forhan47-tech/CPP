#include <iostream>
#include <filesystem>
using namespace std;
using namespace std::filesystem;

int main() {
    try {
        remove("example.txt");
        cout << "File deleted successfully." << endl;
    } catch (const filesystem_error& e) {
        cerr << "Error deleting file: " << e.what() << endl;
    }
    return 0;
}
