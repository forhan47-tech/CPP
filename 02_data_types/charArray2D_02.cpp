#include<iostream>
using namespace std;

int main() {
    char grid[3][30];

    cout << "Enter 3 full names:" << endl;
    for (int i = 0; i < 3; i++) {
        cin.getline(grid[i], 30);
    }

    cout << "The names are:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << grid[i] << endl;
    }

    return 0;
}

