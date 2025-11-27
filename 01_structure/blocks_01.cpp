#include <iostream>
using namespace std;

int main() {
    int a = 5;
    {
        int b = 10;
        {   // Block starts
            int c = 15;
            cout << "Innermost block: c = " << c << endl;
        }   // Block ends
        cout << "Middle block: b = " << b << endl;
    }
    cout << "Outer block: a = " << a << endl;
    return 0;
}
