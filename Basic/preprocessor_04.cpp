#include <iostream>
using namespace std;

#define DEBUG

int main() {
#ifdef DEBUG
    cout << "Debug mode ON" << endl;
#endif

#ifndef RELEASE
    cout << "Release mode OFF" << endl;
#endif
    return 0;
}
