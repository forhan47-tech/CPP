#include <iostream>
#include <utility>
using namespace std;

pair<int, int> minMax(int a, int b) {
    return make_pair(min(a, b), max(a, b));
}

int main() {
    auto result = minMax(10, 20);
    cout << "Min: " << result.first << ", Max: " << result.second << endl;
    return 0;
}
