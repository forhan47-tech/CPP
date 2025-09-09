#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream file("data.txt");
    
    ostringstream buffer;
    buffer << file.rdbuf(); // Reads entire file

    string content = buffer.str();
    cout << content;

    file.close();
    return 0;
}
