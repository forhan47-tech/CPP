#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch = 'a';

    cout << "Is 'a' a letter? " << (isalpha(ch) ? "Yes" : "No") << endl;  // Output: Yes
    cout << "Is 'a' a digit? " << (isdigit(ch) ? "Yes" : "No") << endl;    // Output: No

    cout << "Lowercase 'a' converted to uppercase: " << toupper(ch) << endl;  // Output: A
    cout << "Uppercase 'A' converted to lowercase: " << tolower('A') << endl;  // Output: a

    return 0;
}

