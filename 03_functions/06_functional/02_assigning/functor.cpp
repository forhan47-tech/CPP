#include <iostream>
#include <functional>
using namespace std;

struct Multiply {
    int operator()(int a, int b) { 
        return a * b; 
    }
};

int main() {
    function<int(int, int)> op = Multiply();
    cout << op(7, 2) << endl; 
}
