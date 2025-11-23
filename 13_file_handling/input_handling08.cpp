#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter numbers (Ctrl+D to stop):\n";
    while (cin >> num) {   // loop continues until EOF or invalid input
        cout << "Read: " << num << endl;
    }
    return 0;
}
