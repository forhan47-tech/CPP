#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main() {
    set<int> mySet;
    string input;
    int num;

    cout << "Enter numbers separated by spaces: ";
    getline(cin, input);  // Read entire line

    stringstream ss(input);
    while (ss >> num) {
        mySet.insert(num);
    }

    cout << "Set elements: ";
    for (int num : mySet) cout << num << " ";

    return 0;
}
