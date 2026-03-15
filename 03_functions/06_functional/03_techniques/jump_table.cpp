#include <iostream>
#include <functional>
#include <vector>
using namespace std;

int main() {
    vector<function<int(int,int)>> ops = {
        [](int a, int b){ return a + b; },
        [](int a, int b){ return a - b; },
        [](int a, int b){ return a * b; }
    };

    cout << "Add: " << ops[0](2, 3) << endl;
    cout << "Sub: " << ops[1](5, 2) << endl;
    cout << "Mul: " << ops[2](3, 4) << endl;
    return 0;
}
