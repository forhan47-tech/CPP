#include <iostream>
#include <forward_list>
#include <sstream>

using namespace std;

int main() {
    forward_list<int> fl;
    string input;
    int num;

    auto it = fl.before_begin();  // Iterator before the first element

    cout << "Enter numbers separated by spaces: ";
    getline(cin, input);  // Read entire line

    stringstream ss(input);
    while (ss >> num) {
        it = fl.insert_after(it, num);
    }

    cout << "Forward list elements: ";
    for (int num : fl) cout << num << " ";

    return 0;
}
