#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 2) continue; // skip i = 2
        cout << "i = " << i << endl;
    }
    return 0;
}
