#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int, double, string> t = {1, 3.14, "Hello"};
    
    // tuple<int, double, string> t2(t);  // Copy constructor
    // cout << "t2: " << get<0>(t2) << ", " << get<1>(t2) << ", " << get<2>(t2) << endl;

    cout << "First: " << get<0>(t) << ", Second: " << get<1>(t) 
         << ", Third: " << get<2>(t) << endl;

    return 0;
}

