#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int, int> a = make_tuple(1, 2);
    tuple<int, int> b = make_tuple(1, 3);

    cout << boolalpha;
    cout << "a == b: " << (a == b) << endl;
    cout << "a < b: " << (a < b) << endl;

    return 0;
}
