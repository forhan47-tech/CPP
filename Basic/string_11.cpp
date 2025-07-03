#include <iostream>
#include <string>

using namespace std;

int main() {
    string text = "Hello";

    // Modify first character
    text[0] = 'J'; 
    cout << "First character: " << text[0] << endl;  // Access first character
    cout << "Updated Text: " << text << endl;

    // Modify string by assigning a new value
    text = " World";
    cout << "Updated Text: " << text << endl;

    // Modify multiple characters using replace()
    text.replace(1, 3, "ava"); // Replace characters from index 1 to 3
    cout << "Modified multiple characters: " << text << endl;

    return 0;
}
