#include <iostream>
using namespace std;

#define DEBUG   // define macro

int main() {
#ifdef DEBUG
    cout << "Debug mode is ON" << endl;
#else
    cout << "Debug mode is OFF" << endl;
#endif
    cout << "Program running..." << endl;
}
