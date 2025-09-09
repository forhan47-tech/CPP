#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file("chars.txt"); 

    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string str = "All is Well";
    for (char ch : str) {
        file.put(ch); // Write each character
    }
    file.close();
    return 0;
}
