#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("source.txt", ios::in);
    ofstream destination("destination.txt", ios::out);

    if (!source.is_open() || !destination.is_open()) {
        cerr << "Error opening files." << endl;
        return 1;
    }

    char ch;
    while (source.get(ch)) {
        destination.put(ch);
    }

    source.close();
    destination.close();
    
    cout << "File copied successfully!" << endl;
    return 0;
}
