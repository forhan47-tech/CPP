#include <iostream>
using namespace std;

int main() {
    char str1[] = "Hello";   // Automatically adds '\0' (null terminator)
    char str2[6] = {'H', 'e', 'l', 'l', 'o', '\0'};  // Explicitly defined

    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;

    return 0;
}

