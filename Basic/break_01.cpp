#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 3) break; // exit loop when i = 3
        cout << "i = " << i << endl;
    }
    cout << "Loop ended" << endl;
    return 0;
}
