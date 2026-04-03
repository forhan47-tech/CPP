#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int, string, double> t(2, "Two", 2.5);

    auto [x, y, z] = t; // structured binding
    cout << x << " , " << y << " , " << z << endl; 

    x = 3; y = "Three"; z = 3.5;
    t = make_tuple(x, y, z); // pack back
    cout << get<0>(t) << " , " << get<1>(t) << " , " << get<2>(t) << endl;
}
