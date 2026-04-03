#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss("abcdef");
    ss.seekg(2); // move read pointer to index 2
    char ch;
    ss >> ch;
    cout << ch << endl;
}
