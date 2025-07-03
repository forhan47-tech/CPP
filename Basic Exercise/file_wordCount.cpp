#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    ifstream file("data.txt"); // Open file in read mode
    string word;
    char ch;
    int words = 0, characters = 0;

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Count characters
    while (file.get(ch)) {
        characters++;
    }

    // Reset file stream to read words
    file.clear();  
    file.seekg(0, ios::beg);

    // Count words
    while (file >> word) {
        words++;
    }

    // Close the file
    file.close();

    // Display results
    cout << "Total characters: " << characters << endl;
    cout << "Total words: " << words << endl;

    return 0;
}
