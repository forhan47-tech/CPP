#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> names = {"Alice", "Bob", "Charlie"};

    names.push_back("Diana");  // Add a new name

    for (auto name : names) {  // `auto` deduces `string`
        cout << "Hello, " << name << "!" << endl;
    }

    return 0;
}

