#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("example.txt", ios::in);   // open for reading
    string line;

    if (!file) {
        cout << "File could not be opened for reading!" << endl;
        return 1;
    }

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}
