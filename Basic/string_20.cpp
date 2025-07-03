#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";

    cout << "Before swap: " << str1 << " | " << str2 << endl;

    str1.swap(str2);  // Swap the contents

    cout << "After swap: " << str1 << " | " << str2 << endl;

    return 0;
}

