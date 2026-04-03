#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    auto result = minmax(10, 20);
    cout << "Min: " << result.first << ", Max: " << result.second << endl; 
}
