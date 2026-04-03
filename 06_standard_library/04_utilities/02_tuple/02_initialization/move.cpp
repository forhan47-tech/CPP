#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int, string> t1(3, "Three");
    tuple<int, string> t2(std::move(t1)); // move constructor
    cout << get<0>(t2) << " , " << get<1>(t2) << endl;
}
