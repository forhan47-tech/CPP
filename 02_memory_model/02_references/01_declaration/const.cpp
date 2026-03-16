#include <iostream>
using namespace std;

int main() {
    int x = 5;
    const int& cr = x;
    cout << "cr = " << cr << endl;
    return 0;
}
