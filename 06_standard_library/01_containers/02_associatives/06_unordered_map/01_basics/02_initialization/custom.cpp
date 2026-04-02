#include <iostream>
#include <unordered_map>
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
    unordered_map<string,int,CustomHash,CustomEq> um = {
        {"cat",1},{"dog",2},{"fish",3},{"bird",4}
    };

    for(auto &p : um)
        cout << p.first << " -> " << p.second << endl;
}
