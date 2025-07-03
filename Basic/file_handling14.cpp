#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("output.txt"); // Open file for reading
    ofstream temp("temp.txt"); // Temporary file to write output

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    char ch;
    while (file.get(ch)) { // Read character by character
        temp.put(ch); // Write each character to the temporary file
    }

    file.close();
    temp.close();

    return 0;
}
