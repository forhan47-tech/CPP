#include <iostream>
#include <bitset>

using namespace std;

int main() {
    bitset<8> b("10110011"); 

    cout << "Bitset: " << b << endl;
    
    // Check individual bit using test()
    cout << "Bit at index 2: " << b.test(2) << endl;  
    cout << "Bit at index 5: " << b.test(5) << endl; 

    // Check overall bit conditions
    cout << "All bits are set? " << b.all() << endl;  
    cout << "Any bit set? " << b.any() << endl;  
    cout << "No bits set? " << b.none() << endl; 

    return 0;
}

