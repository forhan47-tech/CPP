#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ofstream file("word_output.txt");

    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string sentence = "Writing word by word in C++.";
    stringstream ss(sentence);

    string word;
    while (ss >> word) {
        file << word << '\n'; // Write each word on a new line
    }
    
    file.close();
    return 0;
}
