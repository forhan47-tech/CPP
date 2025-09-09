#include<iostream>
using namespace std;

int main() {
    char names[3][30];

    cout << "Enter 3 full names:" << endl;
    for (int i = 0; i < 3; i++) {
        cin.getline(names[i], 30);
    }

    cout << "The names are:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << names[i] << endl;
    }

    return 0;
}

