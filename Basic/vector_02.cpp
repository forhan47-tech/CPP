#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> names = {"Alice", "Bob", "Charlie"};

    for (auto name : names) { 
        cout << "Hello, " << name << "!" << endl;
    }
    return 0;
}

