#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> cities = {"Dhaka", "Chattogram", "Sylhet"};

    for (const string& city : cities)
        cout << city << " ";
    cout << endl;

    return 0;
}
