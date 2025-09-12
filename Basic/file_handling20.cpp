#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("source.txt", ios::binary);
    ofstream dest("dest.txt", ios::binary);
    dest << source.rdbuf(); // Efficiently copies entire file buffer
    return 0;
}
