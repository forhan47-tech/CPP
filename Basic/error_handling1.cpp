#include <iostream>
using namespace std;

int main() {
    try {
        throw runtime_error("Something went wrong!");
    } 
    catch (const exception& e) {
        cout << "Caught error: " << e.what() << endl;
    }
    return 0;
}
