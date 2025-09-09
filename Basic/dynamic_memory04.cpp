#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 3;
    string* names = new string[n];

    names[0] = "Alice";
    names[1] = "Bob";
    names[2] = "Charlie";

    for (int i = 0; i < n; ++i)
        cout << names[i] << " ";
    cout << endl;

    delete[] names;
    return 0;
}
