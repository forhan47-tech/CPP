#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers;
    int num;

    cout << "Enter numbers (type -1 to stop): ";
    while (cin >> num && num != -1) {
        numbers.push_back(num);
    }

    cout << "Stored numbers in list: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    return 0;
}

