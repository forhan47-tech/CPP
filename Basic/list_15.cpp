#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers = {10, 20, 20, 30, 40};

    numbers.remove(20);  // Removes all 20s

    cout << "\nAfter remove: ";
    for (int n : numbers) cout << n << " ";

    return 0;
}
