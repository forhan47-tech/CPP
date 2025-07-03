#include <iostream>
#include <unordered_set>
#include <sstream>

using namespace std;

int main() {
    unordered_set<int> us;
    string input;
    int num;

    cout << "Enter numbers separated by spaces: ";
    getline(cin, input);  // Read entire line

    stringstream ss(input);
    while (ss >> num) {
        us.insert(num);
    }

    cout << "Unordered set elements: ";
    for (int num : us) cout << num << " ";

    return 0;
}
