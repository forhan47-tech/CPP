#include <iostream>
#include <utility> 
using namespace std;

pair<int, int> MinMax(int a, int b) {
    if (a < b) return {a, b};
    else return {b, a};
}

int main() {
    auto result = MinMax(10, 20);
    cout << "Min = " << result.first << ", Max = " << result.second << endl;
}
