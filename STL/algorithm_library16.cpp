#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> scores = {50, 20, 80, 10, 60, 30};

    // Sorts only the first k elements in a range
    partial_sort(scores.begin(), scores.begin() + 3, scores.end());

    cout << "Top 3 smallest scores:\n";
    for (int i = 0; i < 3; ++i)
        cout << scores[i] << " ";

    return 0;
}
