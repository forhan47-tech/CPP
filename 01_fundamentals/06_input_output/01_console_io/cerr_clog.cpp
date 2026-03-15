#include <iostream>
using namespace std;

int main() {
    cerr << "Error: Something went wrong!" << endl; // immediate
    clog << "Log: Program started." << endl;        // buffered
    return 0;
}
