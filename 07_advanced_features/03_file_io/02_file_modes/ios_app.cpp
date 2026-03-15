#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("example.txt", ios::out | ios::app);   // open for appending

    if (!file) {
        cout << "File could not be opened for appending!" << endl;
        return 1;
    }

    file << "This line is appended." << endl;

    file.close();
}
