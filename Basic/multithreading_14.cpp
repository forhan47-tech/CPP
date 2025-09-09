#include <iostream>
#include <atomic>
using namespace std;

int main() {
    atomic<int> value(10);  // shared data

    int old = value.fetch_add(5); 
    cout << "Old value: " << old << ", New value: " << value << endl;

    int newVal = value.fetch_sub(3); 
    cout << "Previous value: " << newVal << ", Current value: " << value << endl;

    return 0;
}
