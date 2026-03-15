#include <iostream>
using namespace std;

int main() {
    cout << "Compiled on: " << __DATE__ << " at " << __TIME__ << endl;
    cout << "From file: " << __FILE__ << " at line " << __LINE__ << endl;
    cout << "C++ version: " << __cplusplus << endl;
}
