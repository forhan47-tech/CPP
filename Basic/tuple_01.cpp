#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<char, int, float> t;

    get<0>(t) = 'b';
    get<1>(t) = 5;
    get<2>(t) = 20.5;

    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
    return 0;
}
