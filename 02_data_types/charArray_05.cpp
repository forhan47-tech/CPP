#include<iostream>
using namespace std;

int main() {
    char str[50];
    
    cout << "Enter your full name: ";
    cin.getline(str, 50); // reads until newline

    cout << "Your full name is: " << str;
    return 0;
}

