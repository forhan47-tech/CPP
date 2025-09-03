#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int, double, string> t = {1, 3.14, "Hello"};
    
    cout << "First: " << get<0>(t) << ", Second: " << get<1>(t) 
         << ", Third: " << get<2>(t) << endl;

    return 0;
}

