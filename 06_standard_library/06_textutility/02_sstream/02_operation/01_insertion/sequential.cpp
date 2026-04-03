#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss;

    for(int i=1; i<=3; i++) {
        ss << "Item " << i << "\n";
    }
    cout << ss.str();
}
