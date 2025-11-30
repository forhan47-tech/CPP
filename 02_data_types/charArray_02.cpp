#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello";  // compiler adds '\0' automatically

    str[1] = 'j';  // Modify string
    cout << str[1] << endl;

    cout << "String: " << str << endl;
    return 0;
}

