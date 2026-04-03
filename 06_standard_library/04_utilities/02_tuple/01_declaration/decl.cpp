#include <tuple>
#include <iostream>
using namespace std;

int main() {
    tuple<int, string, double> t; 
    cout << get<0>(t) << " , " << get<1>(t) << " , " << get<2>(t) << endl; 
}
