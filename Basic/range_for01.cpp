#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    // Reference allows modification
    for (int &num : numbers) {  
        num += 2;  
    }

    cout << "Modified values: ";
    for (int num : numbers) {  
        cout << num << " ";
    }

    return 0;
}

