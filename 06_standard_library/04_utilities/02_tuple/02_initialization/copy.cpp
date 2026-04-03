#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int, string> t1(2, "Two");
    tuple<int, string> t2(t1); // copy constructor
    cout << get<0>(t2) << " , " << get<1>(t2) << endl;
}
