#include <iostream>
#include <string>
using namespace std;

void displayMessage(string &msg) {  // Pass by reference
    msg += " - Modified!"; 
    cout << "Message: " << msg << endl;
}

int main() {
    string text = "Efficient String Passing";

    displayMessage(text);  // Passed without copying
    return 0;
}

