#include <iostream>
using namespace std;

int main() {
    bool isEven = (10 % 2 == 0);

    if (isEven) {
        cout << "Number is even" << endl;
    } else {
        cout << "Number is odd" << endl;
    }
    return 0;
}
