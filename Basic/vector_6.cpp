#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int num;

    cout << "Enter numbers (-1 to stop):" << endl;

    while (true) {
        cin >> num;
        if (num == -1) break;  // Sentinel value to stop input
        numbers.push_back(num);
    }

    cout << "Stored Numbers: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}

