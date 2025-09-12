#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("output.txt");  

    if (!file) { 
        cout << "Error: File does not exist!" << endl;
        return 1;
    }

    string data;
    // Read and display the first word
    file >> data; 
    cout << "First word: " << data << endl;

    // Read word-by-word
    while (file >> data) {  
        cout << data << endl;
    }

    file.close();
    return 0;
}
