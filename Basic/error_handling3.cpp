#include <iostream>
using namespace std;

int main() {
    try {
        throw "Critical failure!";
    } catch (int x) {
        cout << "Integer error: " << x << endl;
    } catch (const char* msg) {
        cout << "String error: " << msg << endl;
    } catch (...) {
        cout << "Unknown error occurred!" << endl;
    }
    
    return 0;
}
