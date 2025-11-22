#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("output.txt");  

    if (!file) { 
        cout << "Error: File does not exist!" << endl;
        return 1;
    }

    if (file.eof()) {
        cout << "End of file reached!" << endl;
    }
    
    file.close();
    return 0;
}
