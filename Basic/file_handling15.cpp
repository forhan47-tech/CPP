#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("many_values.txt");

    if (!file.is_open()) {
        cerr << "Error opening file.\n";
        return 1;
    }

    // Write 100 values: squares of numbers from 1 to 100
    for (int i = 1; i <= 100; ++i) {
        string name;

        cout << "Enter name for entry " << i << ": ";
        cin >> name;

        file << "Value " << i << ": " << i * i << " " << name << "\n";
    }

    file.close();
    cout << "100 values written to many_values.txt\n";
    return 0;
}
