#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers = {10, 20, 20, 30, 40};

    // remove example
    numbers.remove(20);  // Removes all 20s

    cout << "\nAfter remove: ";
    for (int n : numbers) cout << n << " ";

    // remove_if example
    numbers.remove_if([](int x) { return x > 25; });

    cout << "\nAfter remove_if (>25): ";
    for (int n : numbers) cout << n << " ";
        cout << endl;

    return 0;
}
