#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to print each element
void print_element(int n) {
    cout << n << " ";
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    
    // Using for_each with a function pointer
    for_each(v.begin(), v.end(), print_element);
    cout << endl;

    // Using for_each with a lambda expression
    for_each(v.begin(), v.end(), [](int n) {
        cout << n << " ";
    });
    cout << endl;


    return 0;
}


