#include <iostream>
#include <map>
using namespace std;

void addEntry(map<string,int> &m, string name, int age) { // reference
    m[name] = age;
}

int main() {
    map<string,int> ages = { {"Alice",25}, {"Bob",30} };
    addEntry(ages, "Charlie", 35);
    for (auto &p : ages) cout << p.first << " → " << p.second << endl;
}
