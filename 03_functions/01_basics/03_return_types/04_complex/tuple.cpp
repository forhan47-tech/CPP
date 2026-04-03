#include <iostream>
#include <tuple>
using namespace std;

tuple<bool, int> divide(int a, int b) {
    if (b == 0) return {false, 0}; 
    return {true, a / b};         
}

int main() {
    auto [ok, result] = divide(10, 2);
    if (ok) cout << "Result = " << result << endl;
    else cout << "Division by zero!" << endl;
}
