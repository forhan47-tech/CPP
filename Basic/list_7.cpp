#include <iostream>
#include <list>
#include <sstream>

using namespace std;

int main() {
    list<int> myList;
    string input;
    int num;

    cout << "Enter numbers separated by spaces: ";
    getline(cin, input);  // Read entire line

    stringstream ss(input);
    while (ss >> num) {
        myList.push_back(num);
    }

    cout << "List elements: ";
    for (int num : myList) cout << num << " ";

    return 0;
}
