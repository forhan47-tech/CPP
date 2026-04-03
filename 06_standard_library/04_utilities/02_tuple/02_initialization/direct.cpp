#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int, string, double> t(1, "One", 1.5); // parameterized
    cout << get<0>(t) << " , " << get<1>(t) << " , " << get<2>(t) << endl;
}
