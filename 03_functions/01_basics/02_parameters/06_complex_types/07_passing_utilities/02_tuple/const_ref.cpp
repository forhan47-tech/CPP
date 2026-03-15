#include <iostream>
#include <tuple>
using namespace std;

void printTuple(const tuple<string, int, double> &t) { // const reference
    cout << get<0>(t) << " → " << get<1>(t) << " → " << get<2>(t) << endl;
}

int main() {
    tuple<string, int, double> person = {"Diana", 22, 60.7};
    printTuple(person); // safe, efficient
}
