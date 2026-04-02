#include <iostream>
#include <unordered_set>
using namespace std;

struct CustomHash {
    size_t operator()(const string &s) const {
        return s.length(); // hash by string length
    }
};

struct CustomEq {
    bool operator()(const string &a, const string &b) const {
        return a.length() == b.length(); // equal if same length
    }
};

int main() {
    unordered_set<string, CustomHash, CustomEq> us = {"cat","dog","fish","bird"};

    for(auto &x : us)
        cout << x << " ";
}
