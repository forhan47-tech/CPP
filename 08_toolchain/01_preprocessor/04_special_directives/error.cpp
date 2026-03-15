#include <iostream>
using namespace std;

#ifndef CONFIG
    #error "CONFIG macro must be defined!"
#endif

int main() {
    cout << "Program compiled successfully." << endl;
}
