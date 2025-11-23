#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<string, vector<int>> scores;

    scores["Alice"] = {90, 92, 88};
    scores["Bob"].push_back(85);

    for (const auto& [name, marks] : scores) {
        cout << name << ": ";
        for (int m : marks) cout << m << " ";
        cout << endl;
    }

    return 0;
}
