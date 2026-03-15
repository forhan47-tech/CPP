#include <iostream>
#include <tuple>
using namespace std;

void showTuple(tuple<string, int, double> t) { // copy
    cout << get<0>(t) << " → " << get<1>(t) << " → " << get<2>(t) << endl;
    get<1>(t)++; // modifies only the copy
}

int main() {
    tuple<string, int, double> person = {"Alice", 25, 55.5};
    showTuple(person);
    cout << "Outside: " << get<1>(person) << endl; // still 25
}
