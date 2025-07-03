#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    for (int num : numbers) {  // Range-based iteration
        cout << num << " ";
    }

    return 0;
}

