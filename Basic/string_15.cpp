#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "   Beautiful day ahead   ";

    size_t first_vowel = s.find_first_of("aeiou");
    size_t last_non_space = s.find_last_not_of(" ");

    cout << "First vowel at index: " << first_vowel << endl;
    cout << "Last non-space character at index: " << last_non_space << endl;
    return 0;
}
