#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("example.txt");  

    if (!in) {
        cerr << "Error: Could not open file!" << endl;
        return 1;
    }

    string word;
    while (in >> word) {   // read word by word
        cout << word << endl;
    }

    in.close(); 
}
