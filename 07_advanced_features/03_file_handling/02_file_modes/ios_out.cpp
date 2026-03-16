#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("example.txt", ios::out);   // open for writing

    if (!file) {
        cout << "File could not be opened for writing!" << endl;
        return 1;
    }

    file << "This will overwrite the file." << endl;

    file.close();
}
