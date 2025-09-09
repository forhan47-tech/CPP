#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence = "C++ streams are powerful";
    stringstream ss(sentence);
    
    string word;
    while (ss >> word) {  // Extract word-by-word
        cout << word << endl;
    }
}

