#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("example.txt", ios::out | ios::trunc);   // erase old content

    if (!file) {
        cout << "File could not be opened for truncating!" << endl;
        return 1;
    }

    file << "Old content erased, new content written." << endl;

    file.close();
}
