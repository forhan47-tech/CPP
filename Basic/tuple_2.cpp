#include <iostream>
#include <tuple>
using namespace std;

int main() {
    auto t = make_tuple(42, 2.71, "C++");

    cout << "First Element: " << get<0>(t) << ", Second Element: " << get<1>(t) 
         << ", Third Element: " << get<2>(t) << endl;

    return 0;
}

