#include <iostream>
#include <map>
using namespace std;

map<string, int> getScores() {
    return { {"Alice", 90}, {"Bob", 85}, {"Charlie", 92} };
}

int main() {
    auto scores = getScores();
    for (auto &p : scores) cout << p.first << ": " << p.second << endl;
}
