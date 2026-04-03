#include <iostream>
#include <utility>
using namespace std;

int main() {
    auto p = make_pair(3, "Three");
    cout << p.first << " - " << p.second << endl;
}
