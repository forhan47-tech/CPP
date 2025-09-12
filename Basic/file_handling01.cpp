#include <iostream>
#include <fstream>
using namespace std; 

int main() {
    ifstream file("example.txt"); // Open file for reading

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    
    file.close(); // Close the file
    return 0;
}
