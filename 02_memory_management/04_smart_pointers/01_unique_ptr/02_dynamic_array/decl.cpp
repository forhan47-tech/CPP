#include <iostream>
#include <memory>
using namespace std;

int main() {
    auto arr = make_unique<int[]>(5); // safer allocation

    for (int i = 0; i < 5; i++) arr[i] = i + 1;

    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
}
