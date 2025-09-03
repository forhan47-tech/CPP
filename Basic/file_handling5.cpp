#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("output.txt");  

    if (!file) { 
        cout << "Error: File does not exist!" << endl;
        return 1;
    }

    string data;

    // Read and display the first word
    file >> data; // Read first word
    cout << "First word: " << data << endl;

    while (file >> data) {  // Read word-by-word
        cout << data << endl;
    }

    if (file.eof()) {
        cout << "End of file reached!" << endl;
    }

    file.close();
    return 0;
}
