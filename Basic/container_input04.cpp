#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;
    
    int num;
    cout << "Enter numbers (type -1 to stop): ";
    while (cin >> num && num != -1) {
        v1.push_back(num);
    }

    cout << "Stored numbers: ";
    for (int val : v1) cout << val << " ";
    cout << endl;
    return 0;
}

