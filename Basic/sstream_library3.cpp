#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence = "C++ streams are powerful";
    istringstream iss(sentence);
    
    string word;
    while (iss >> word) {  // Extract word-by-word
        cout << word << endl;
    }
}

