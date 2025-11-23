#include <iostream>
#include <unordered_map>
using namespace std;

void updateScores(unordered_map<string, int>& scores) {
    scores["Alice"] += 10;
    scores["Bob"] += 5;
}

int main() {
    unordered_map<string, int> scores = {
        {"Alice", 50},
        {"Bob", 40}
    };
    
    updateScores(scores);

    for (const auto& [name, score] : scores)
        cout << name << ": " << score << endl;

    return 0;
}
