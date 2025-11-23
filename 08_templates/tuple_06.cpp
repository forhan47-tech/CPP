#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int, char, float> t1(20, 'g', 17.5);
    tuple<int, char, float> t2(10, 'f', 15.5);

    t1.swap(t2);

    cout << "t1: " << get<0>(t1) << " " << get<1>(t1) << " " << get<2>(t1) << endl;
    cout << "t2: " << get<0>(t2) << " " << get<1>(t2) << " " << get<2>(t2) << endl;

    return 0;
}
