#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[20] = "Hello";
    char str2[] = "World";

    // Concatenating strings
    strcat(str1, str2);  // str1 = "HelloWorld"
    cout << "Concatenated string: " << str1 << endl;

    // Copying a string
    char str3[20];
    strcpy(str3, str1);  // str3 = "HelloWorld"
    cout << "Copied string: " << str3 << endl;

    // Comparing strings
    if (strcmp(str1, str2) == 0) {
        cout << "Strings are equal!" << endl;
    } else {
        cout << "Strings are not equal!" << endl;  // Output: Strings are not equal!
    }

    return 0;
}

