#include<iostream>
#include<string>
using namespace std;

int main() {
    string names[3];  

    cout << "Enter 3 full names:" << endl;

    for (int i = 0; i < 3; i++) {
        getline(cin, names[i]);  
    }

    cout << "The names are:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << names[i] << endl;  
    }

    return 0;
}

