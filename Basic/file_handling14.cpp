#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt"); 

    if (!file.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    file.put('A'); // Write a single character
    file.close();
    return 0;
}
