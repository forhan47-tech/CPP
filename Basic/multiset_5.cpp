#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main() {
    multiset<int> ms;
    string input;
    int num;

    cout << "Enter numbers separated by spaces: ";
    getline(cin, input);  // Read entire line

    stringstream ss(input);
    while (ss >> num) {
        ms.insert(num);
    }

    cout << "Multiset elements: ";
    for (int num : ms) cout << num << " ";

    return 0;
}
