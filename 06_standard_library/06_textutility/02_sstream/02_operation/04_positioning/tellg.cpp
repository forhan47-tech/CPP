#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss("12345");
    ss.seekg(1);
    cout << "Read position: " << ss.tellg() << endl; 
}
