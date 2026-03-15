#include <iostream>
#include <tuple>
using namespace std;

void incrementAge(tuple<string, int, double> &t) { // reference
    get<1>(t)++;
}

int main() {
    tuple<string, int, double> person = {"Bob", 30, 70.2};
    incrementAge(person);
    cout << get<0>(person) << " → " << get<1>(person) << endl; 
}
