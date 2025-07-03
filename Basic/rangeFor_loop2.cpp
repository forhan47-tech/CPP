#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    for (int &num : numbers) {  // Reference prevents unnecessary copying
        num *= 2;  // Modify array values
    }

    for (int num : numbers) {  // Print modified values
        cout << num << " ";
    }

    return 0;
}

