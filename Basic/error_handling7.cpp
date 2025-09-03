#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        throw logic_error("Invalid operation logic");
    } 
    catch (const logic_error& e) {
        cerr << "Logic error: " << e.what() << endl;
    } 
    catch (const runtime_error& e) {
        cerr << "Runtime error: " << e.what() << endl;
    } 
    catch (...) {
        cerr << "Unknown exception" << endl;
    }

    return 0;
}
