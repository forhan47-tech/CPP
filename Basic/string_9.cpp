#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[3] = { "Apple", "Banana", "Cherry" };

    cout << "First word: " << str[0] << endl;
    cout << "Second word: " << str[1] << endl;

    str[2] = "Date";  // Change the third word
    cout << "Third word changed to: " << str[2] << endl;

    // Access a specific character: row 1, column 2 
    cout << "Character at [1][2]: " << str[1][2] << endl;

    // Modify a character
    str[2][0] = 'J';
    cout << "Modified row 2: " << str[2] << endl;
    
    return 0;
}
