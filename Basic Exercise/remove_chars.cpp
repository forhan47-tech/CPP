#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, result;
    char removeChar;

    cout << "Enter a string: ";
    getline(cin, str); // Read input

    cout << "Enter character to remove: ";
    cin >> removeChar;

    for (char c : str) {
        if (c != removeChar) {
            result += c; // Append all except the unwanted character
        }
    }

    cout << "Modified string: " << result << endl;
    return 0;
}
