#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main() {
    vector<tuple<int, string, double>> records;

    records.emplace_back(1, "Alpha", 2.5);
    records.emplace_back(2, "Beta", 3.0);

    for (const auto& [id, name, score] : records)
        cout << id << ": " << name << " (" << score << ")" << endl;

    return 0;
}
