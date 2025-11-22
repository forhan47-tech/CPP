#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 2) goto end; // jump out of both loops
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
end:
    cout << "Exited nested loops" << endl;
    return 0;
}
