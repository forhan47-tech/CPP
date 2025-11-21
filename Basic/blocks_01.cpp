#include <iostream>
using namespace std;

int main() {
    int a = 5;
    {
        int b = 10;
        {
            int c = 15;
            cout << "Innermost block: c = " << c << endl;
        }
        cout << "Middle block: b = " << b << endl;
    }
    cout << "Outer block: a = " << a << endl;
    return 0;
}
