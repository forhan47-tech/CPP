#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 5) {
        i++;
        if (i == 3) continue; // skip printing when i = 3
        cout << "i = " << i << endl;
    }
    return 0;
}
