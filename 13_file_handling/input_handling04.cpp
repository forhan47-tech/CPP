#include <iostream>

using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    ch = cin.get(); // Read character

    cout << "You entered: ";
    cout.put(ch); // Print character

    cout.put('\n'); 
    return 0;
}
