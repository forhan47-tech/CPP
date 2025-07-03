#include <iostream>
#include <map>

using namespace std;

int main() {
    string str = "hello world"; 
    
    map<char, int> freq;

    // Count frequency of each character
    for (char ch : str) {
        freq[ch]++;
    }

    // Display frequency
    cout << "Character frequencies:\n";
    for (const auto& pair : freq) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

