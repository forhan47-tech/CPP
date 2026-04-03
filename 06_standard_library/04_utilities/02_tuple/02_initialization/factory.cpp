#include <iostream>
#include <tuple>
using namespace std;

int main() {
    auto t = make_tuple(4, "Four", 4.5); // type deduction
    cout << get<0>(t) << " , " << get<1>(t) << " , " << get<2>(t) << endl;
}
