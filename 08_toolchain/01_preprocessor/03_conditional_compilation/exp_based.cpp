#include <iostream>
using namespace std;

#define VERSION 2

int main() {
#if VERSION == 1
    cout << "Version 1 features enabled" << endl;
#elif VERSION == 2
    cout << "Version 2 features enabled" << endl;
#else
    cout << "Unknown version" << endl;
#endif
}
