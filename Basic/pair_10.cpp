#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, pair<string, double>> um;

    um[1] = {"Apple", 2.5};
    um[2] = {"Banana", 1.8};

    for (const auto& [id, info] : um)
        cout << id << ": " << info.first << " $" << info.second << endl;

    return 0;
}
