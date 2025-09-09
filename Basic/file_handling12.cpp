#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("many_values.txt");

    if (!file) {
        cerr << "Error opening file.\n";
        return 1;
    }

    for (int i = 1; i <= 3; ++i) {
        file << "ID: " << i << ", Score: " << i * 10 << '\n';
    }        
    file.close();
    return 0;
}
