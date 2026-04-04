#include <iostream>
#include <map>
using namespace std;

map<char, int> countChars(const string &s) {
    map<char, int> freq;
    for (char c : s) freq[c]++;
    return freq; // returns map
}

int main() {
    auto freq = countChars("banana");
    for (auto &pair : freq) {
        cout << pair.first << " -> " << pair.second << endl;
    }
}
