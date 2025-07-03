#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> words;
    string input;
    
    cout << "Enter words (type 'STOP' to end):" << endl;
    
    while (true) {
        getline(cin, input);  // Read a line of input
        if (input == "STOP") break;  // Stop when "STOP" is entered
        words.push_back(input);  
    }

    cout << "You entered: ";
    for (const string& word : words) {
        cout << word << " ";
    }

    cout << endl;
    return 0;
}

