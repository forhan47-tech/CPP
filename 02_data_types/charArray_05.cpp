#include <iostream>
using namespace std;

int main() {
    char grid[3][10] = {
        "Hello",
        "World",
        "C++"
    };

    for (int i = 0; i < 3; i++) {
        cout << grid[i] << endl;
    }

    return 0;
}
