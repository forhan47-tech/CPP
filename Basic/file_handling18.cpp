#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<string> lines = {
        "This is line 1",
        "This is line 2",
        "This is line 3",
        "Written by NAIMUDDIN"
    };

    ofstream file("data.txt");

    if (!file.is_open()) {
        cerr << "Error opening file.\n";
        return 1;
    }

    for (const string& line : lines) {
        file << line << "\n"; // write each string as a line
    }

    file.close();
    cout << "Vector data written to vector_output.txt\n";
    return 0;
}
