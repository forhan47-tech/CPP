#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello, World!";

    // Modifying characters using generic for loop
    for (size_t i = 0; i < str.size(); i++) {
        str[i] = toupper(str[i]); // Convert each character to uppercase
    }

    for (size_t i = 0; i < str.size(); i++) {
        cout << str[i] << " ";
    }

    return 0;
}
