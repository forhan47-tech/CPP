#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello, World!";

    for (size_t i = 0; i < str.size(); i++) {
        cout << str[i] << " ";
    }
    return 0;
}
