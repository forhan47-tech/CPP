#include <iostream>
#include <array>
using namespace std;

int main() {
    array<char, 5> vowels = {'a', 'e', 'i', 'o', 'u'};

    cout << "Array Elements: ";
    int i = 0;
    for (int num : arr) {
        cout << "arr[" << i++ << "] = " << num << " ";
    }
    cout << endl;
    return 0;
}
