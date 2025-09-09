#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Enter numbers (type -1 to stop): ";
    while (cin >> number && number != -1) {  
        cout << "You entered: " << number << endl;
    }
    cout << "Input ended." << endl;
    return 0;
}
