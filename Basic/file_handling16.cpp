#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");

    if (!file) {
        cerr << "Error opening file.\n";
        return 1;
    }

    // Write using put()
    file.put('A');
    file.put('\n');


    string str = "Hello, World!";  // Example string
    for (char ch : str) 
    file.put(ch);
    file.put('\n');

    file.close();
    return 0;
}
