#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream File("input.txt");

    if (!File) {
        cerr << "Error opening file!" << endl;
        return 1; 
    }

    char ch;
    // Read and display the first character
    File.get(ch); 
    cout << "First character: " << ch << endl;

    // Read character by character
    while (File.get(ch)) { 
        cout << ch; 
    }

    File.close(); 
    return 0;
}

