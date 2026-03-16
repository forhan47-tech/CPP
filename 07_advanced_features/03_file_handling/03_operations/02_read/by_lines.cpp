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

    string line;
    while (getline(in, line)) {   // read line by line
        cout << line << endl;
    }

    in.close();  
}
