#include<iostream>
using namespace std;

int main() {
    char name[50];
    
    cout << "Enter your full name: ";
    cin.getline(name, 50);

    cout << "Your full name is: " << name;
    return 0;
}

