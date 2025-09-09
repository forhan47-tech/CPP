#include <iostream>
using namespace std;

int main() {
    try {
        throw 404; // Throws an integer
    } catch (int error) {
        cout << "Error Code: " << error << endl;
    } catch (...) {
        cout << "Unknown error occurred!" << endl;
    }
    
    return 0;
}
