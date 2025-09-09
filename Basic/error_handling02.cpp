#include <iostream>
using namespace std;

int main() {
    try {
        throw "Critical failure!";
    } catch (const char* msg) {
        cout << "String error: " << msg << endl;
    } catch (...) {
        cout << "Unknown error occurred!" << endl;
    }
    
    return 0;
}
