#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream file("output.txt");
    string line;

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Enter multiple lines (type 'exit' to stop):" << endl;

    while (true) {
        getline(cin, line);
        if (line == "exit") {  // Check for exit command
            break;
        }
        file << line << endl;
    }

    file.close();
    cout << "Lines written successfully to output.txt." << endl;
    return 0;
}
