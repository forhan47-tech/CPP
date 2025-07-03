#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello, World!";

    for (auto it = str.begin(); it != str.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}
