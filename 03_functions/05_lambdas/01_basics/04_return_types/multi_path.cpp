#include <iostream>
using namespace std;

int main() {
    auto check = [](int x) -> string {
        if (x > 0) return "Positive";
        else return "Non-positive";
    };
    cout << check(5) << endl;
}
