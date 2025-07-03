#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

string cleanString(const string &input) {
    string result;
    for (char c : input) {
        if (isspace(c) || ispunct(c))
            result += ' ';
        else
            result += c;
    }
    return result;
}

int main() {
    string str = "Hello,\tworld! Welcome\nto programming.";
    string cleaned = cleanString(str);

    stringstream ss(cleaned);
    string word;
    int count = 0;

    while (ss >> word) {
        cout << "Word: " << word << '\n';
        count++;
    }

    cout << "Total words: " << count << endl;
    return 0;
}
