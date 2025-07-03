#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Enter numbers (Ctrl+D or Ctrl+Z to stop): " << endl;

    while (cin >> number) {  // Loops until input fails (EOF or invalid input)
        cout << "You entered: " << number << endl;
    }

    cout << "Input ended." << endl;
    return 0;
}

