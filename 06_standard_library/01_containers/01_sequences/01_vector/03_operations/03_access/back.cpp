#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    cout << "Back element: " << v.back() << endl; // 30
    v.back() = 77; // modify
    cout << "Modified back: " << v.back() << endl; // 77
}
