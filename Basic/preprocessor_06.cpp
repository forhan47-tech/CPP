#include <iostream>
using namespace std;

#define VERSION 1

#if VERSION < 2
#error "Version must be at least 2"
#endif

int main() {
    cout << "Program running..." << endl;
    return 0;
}
