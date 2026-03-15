#include <iostream>
#include <memory>
using namespace std;

int main() {
    auto arr = make_unique<int[]>(3);
    for (int i = 0; i < 3; i++) {
        arr[i] = i;
    }
    
    auto vec = std::move(arr); // transfer ownership
    for (int i = 0; i < 3; i++) {
        cout << vec[i] << " ";
    }
}
