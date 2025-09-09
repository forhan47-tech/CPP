#include <iostream>
#include <string>
using namespace std;

void displayMessage(string &msg) {  
    msg += " - Modified!"; 
    cout << "Message: " << msg << endl;
}

int main() {
    string text = "Efficient String Passing";

    displayMessage(text);  
    return 0;
}

