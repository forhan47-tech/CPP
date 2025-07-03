#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string str = "The quick brown fox jumps over the lazy dog";
    istringstream ss(str);
    string word, smallest, largest;

    if (ss >> word) {
        smallest = largest = word; // Initialize with the first word
    }

    while (ss >> word) {
        if (word.length() < smallest.length()) {
            smallest = word;
        }
        if (word.length() > largest.length()) {
            largest = word;
        }
    }

    cout << "Smallest word: " << smallest << endl;
    cout << "Largest word: " << largest << endl;

    return 0;
}
