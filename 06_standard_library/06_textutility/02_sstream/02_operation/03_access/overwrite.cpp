#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss("Old Content");
    cout << "Before: " << ss.str() << endl;

    ss.str("New Content"); // replace buffer
    cout << "After: " << ss.str() << endl;
    return 0;
}
