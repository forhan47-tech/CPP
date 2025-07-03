#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

    cout << "Enter words ('exit' to stop):" << endl;

    while (true) {
        cin >> input;
        if (input == "exit") break;  // Sentinel value to stop input
        cout << "You entered: " << input << endl;
    }

    cout << "Input ended." << endl;
    return 0;
}

