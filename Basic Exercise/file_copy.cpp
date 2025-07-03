#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream source("source.txt");
    ofstream destination("copy.txt");
    string line;

    if (!source || !destination) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    while (getline(source, line)) {
        destination << line << endl;  // Write line-by-line to new file
    }

    source.close();
    destination.close();

    cout << "File copied successfully!" << endl;
    return 0;
}
