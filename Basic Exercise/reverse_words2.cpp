#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string str = "Hello World from C++";
    stringstream ss(str);
    string word;
    vector<string> words;

    // Extract words from the string
    while (ss >> word) {
        words.push_back(word);
    }

    // Reverse the order of words
    reverse(words.begin(), words.end());

    for (const auto &w : words) {
        cout << w << " "; // Print each word in reverse order
    }
    cout << endl;
    
    return 0;
}
