#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss("42 3.14 Hello");
    int number;
    double pi;
    string word;

    ss >> number >> pi >> word;
    cout << "Integer: " << number << "\nDouble: " << pi << "\nString: " << word << endl;
}
