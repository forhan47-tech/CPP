#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "The ASCII value of '" << ch << "' is " << static_cast<int>(ch) << endl;

    return 0;
}
