#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("output.txt");  // Open a missing file

    if (file.fail()) {  // Check if the file opened successfully
        cout << "Error: File does not exist!" << endl;
        return 1;
    }

    string data;
    while (file >> data) {  // Read data from the file
        cout << data << endl;
    }

    if (file.eof()) {
        cout << "End of file reached!" << endl;
    }
    
    file.close();
    return 0;
}

