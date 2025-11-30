#include <iostream>
using namespace std;

int main() {
    char str[] = "World";
    for (int i = 0; str[i] != '\0'; i++) {
        cout << "Index " << i << ": " << str[i] << endl;
    }
}
