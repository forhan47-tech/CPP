#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str = "Hello world from C++";
    stringstream ss(str); // Convert string to stream
    string word;

    while (ss >> word) { // Extract each word
        cout << word << endl;
    }

    return 0;
}
