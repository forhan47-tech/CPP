#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter numbers (-1 to stop):" << endl;
    while (true) {
        cin >> num;
        if (num == -1) break;  // Sentinel value to stop input
        cout << "You entered: " << num << endl;
    }

    cout << "Input ended." << endl;
    return 0;
}

