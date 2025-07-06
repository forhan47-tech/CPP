#include <iostream>
using namespace std;

int main() {
    try {
        bool error = true;
        if (error)
            throw true;  // throwing a bool
    } catch (bool flag) {
        cout << "Caught a bool exception: " << (flag ? "true" : "false") << endl;
    }

    return 0;
}
