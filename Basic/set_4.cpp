#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> numbers;
    int num;

    cout << "Enter numbers (type -1 to stop): ";
    while (cin >> num && num != -1) {
        numbers.insert(num);
    }

    cout << "Stored unique sorted numbers: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    return 0;
}

