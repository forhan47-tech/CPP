#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("input.txt");  
    int num;

    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Read and display the first number
    file >> num;  
    cout << "First number: " << num << endl;

    // Reads unknown numbers until EOF
    cout << "Reading numbers from file:" << endl;
    while (file >> num) {  
        cout << num << " ";
    }
    cout << endl;

    file.close();  
    return 0;
}

