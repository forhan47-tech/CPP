#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello";

    // Modifying characters using range-based for loop
    for (char& ch : str) {
        ch = toupper(ch); // Convert each character to uppercase
    }

    cout << "Characters: ";
    for (char ch : str)
        cout << ch << " ";

    return 0;
}
