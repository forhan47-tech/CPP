#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};

    for (auto el : arr) { // auto deduces int    
        cout << el << " ";
    }
    return 0;
}
