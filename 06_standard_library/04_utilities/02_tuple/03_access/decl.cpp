#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int, string, double> t(2, "Two", 2.5);
    cout << get<0>(t) << " , " << get<1>(t) << " , " << get<2>(t) << endl;
    
    get<0>(t) = 3; // modify 
    get<1>(t) = "Three"; 
    get<2>(t) = 3.5; 
    cout << get<0>(t) << " , " << get<1>(t) << " , " << get<2>(t) << endl;
}
