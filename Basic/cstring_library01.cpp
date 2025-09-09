#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[20] = "Hello";
    char str2[] = "World";

    // Concatenating strings
    strcat(str1, str2); 
    cout << "Concatenated string: " << str1 << endl;

    // Copying a string
    char str3[20];
    strcpy(str3, str1);  
    cout << "Copied string: " << str3 << endl;

    return 0;
}

