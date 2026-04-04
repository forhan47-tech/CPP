#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> b(42); 
    cout << b.test(3) << endl;

    try {
        cout << b.test(8) << endl; // throws exception
    } catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
    }
}
