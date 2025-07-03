#include <iostream>
using namespace std;

int main() {
    try {
        throw 404; // Throws an integer
    }
    catch (int errorCode) {
        cout << "Error Code: " << errorCode << endl;
    }
    return 0;
}
