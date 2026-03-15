#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            cout << "(" << i << "," << j << ") ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
