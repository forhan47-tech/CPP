#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    vector<int> vec;

    string input;
    cout << "Enter numbers separated by spaces: ";
    getline(cin, input); 

    int num;
    stringstream ss(input);
    while (ss >> num) {
        vec.push_back(num);
    }

    cout << "Vector elements: ";
    for (int num : vec) cout << num << " ";

    return 0;
}
