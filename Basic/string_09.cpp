#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Hello";

    // Modify first character
    text[0] = 'J'; 
    cout << "Updated Text: " << text << endl;

    // Modify string 
    text = " World";
    cout << "Updated Text: " << text << endl;

    // Modify multiple characters using replace()
    text.replace(1, 3, "ava"); 
    cout << "Modified multiple characters: " << text << endl;

    return 0;
}
