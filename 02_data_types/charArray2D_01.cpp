#include <iostream>
using namespace std;

int main() {
    char grid[3][10] = {
        "Hello",
        "World",
        "C++"
    };

    grid[2][0] = 'j';  // Modify string
    cout << grid[2] << endl;

    for (int i = 0; i < 3; i++) {
        cout << grid[i] << endl;
    }

    return 0;
}
