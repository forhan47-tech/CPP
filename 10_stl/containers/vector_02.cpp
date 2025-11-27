#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> str = {"Alice", "Bob", "Charlie"};

    for (auto name : str) { 
        cout << "Hello, " << name << "!" << endl;
    }
    return 0;
}

