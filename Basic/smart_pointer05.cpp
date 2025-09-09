#include <iostream>
#include <memory>

using namespace std;

int main() {
    unique_ptr<int[]> arr = make_unique<int[]>(5);  // with Array

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];  
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
