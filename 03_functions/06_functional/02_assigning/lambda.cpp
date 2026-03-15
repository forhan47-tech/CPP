#include <iostream>
#include <functional>
using namespace std;

int main() {
    function<int(int,int)> add = [](int a, int b) { 
        return a + b; 
    };

    function<int(int,int)> mul = [](int a, int b) { 
        return a * b; 
    };

    cout << "Add: " << add(2, 3) << endl;
    cout << "Mul: " << mul(3, 4) << endl;
    return 0;
}
