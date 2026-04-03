#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int, string, double> t(3, "Three", 3.5);
    int a; string b; double c;

    tie(a, b, c) = t; // unpack
    cout << a << " , " << b << " , " << c << endl;

    a = 4; b = "Four"; c = 4.5;
    t = make_tuple(a, b, c); // pack
    cout << get<0>(t) << " , " << get<1>(t) << " , " << get<2>(t) << endl;
}
