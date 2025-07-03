#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    vector<int> v;
    string input;
    int num;

    cout << "Enter numbers separated by spaces: ";
    getline(cin, input);  // Read entire line

    stringstream ss(input);
    while (ss >> num) {
        v.push_back(num);
    }

    cout << "Vector elements: ";
    for (int num : v) cout << num << " ";

    return 0;
}
