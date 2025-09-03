#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    try {
        cout << v.at(10); // Throws out_of_range
    } 
    catch (const out_of_range& e) {
        cout << "Caught: " << e.what() << endl;
    }

    return 0;
}
