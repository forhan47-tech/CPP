#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch = 'a';

    cout << "Is 'a' a letter? " << (isalpha(ch) ? "Yes" : "No") << endl;  
    cout << "Is 'a' a digit? " << (isdigit(ch) ? "Yes" : "No") << endl;    

    cout << "Lowercase 'a' converted to uppercase: " << toupper(ch) << endl;  
    cout << "Uppercase 'A' converted to lowercase: " << tolower('A') << endl;  

    return 0;
}

