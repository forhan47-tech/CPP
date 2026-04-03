#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int, string> t1(3, "Three");
    tuple<int, string> t2(4, "Four");

    t1.swap(t2); // swap contents
    cout << get<0>(t1) << " , " << get<1>(t1) << endl;
    cout << get<0>(t2) << " , " << get<1>(t2) << endl; 
}
