#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Source vector with sample values
    vector<int> source = {10, 20, 30, 45, 40, 50};

    // Destination vector, same size as source
    vector<int> copied(source.size());

    // Copy all elements from source to destination
    // Using back_inserter to automatically resize the destination vector
    copy(source.begin(), source.end(), copied.begin());

    cout << "Copied elements: ";
    for (int value : copied)
        cout << value << " ";
    cout << endl;

    // Vector to hold only even numbers from source
    vector<int> evenValues;

    // Copy only even elements using copy_if and a lambda
    copy_if(source.begin(), source.end(), back_inserter(evenValues), [](int x) {
        return x % 2 == 0;
    });

    cout << "Even numbers copied: ";
    for (int value : evenValues)
        cout << value << " ";
    cout << endl;

    return 0;
}
