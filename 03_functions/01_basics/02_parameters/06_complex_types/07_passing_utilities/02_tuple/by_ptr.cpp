#include <iostream>
#include <tuple>
using namespace std;

void incrementAge(tuple<string, int, double> *t) { // pointer
    get<1>(*t)++;
}

int main() {
    tuple<string, int, double> person = {"Charlie", 40, 80.1};
    incrementAge(&person); // pass address
    cout << get<0>(person) << " → " << get<1>(person) << endl; // Charlie → 41
}
