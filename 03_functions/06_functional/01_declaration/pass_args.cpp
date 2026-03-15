#include <iostream>
#include <functional>
using namespace std;

int add(int a, int b) { 
    return a + b;
}

int main() {
    function<int(int, int)> op = add;
    cout << op(5, 3) << endl; 
}
