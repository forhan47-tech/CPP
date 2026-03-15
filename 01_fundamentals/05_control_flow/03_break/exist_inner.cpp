#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (j == 2) break; // exits inner loop only
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }
    return 0;
}
