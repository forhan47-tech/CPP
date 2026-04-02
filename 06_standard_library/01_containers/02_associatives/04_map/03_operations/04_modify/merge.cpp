#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> m1 = {{1,"A"}, {2,"B"}};
    map<int,string> m2 = {{2,"X"}, {3,"C"}};

    m1.merge(m2);

    for(auto &p : m1)
        cout << p.first << " -> " << p.second << endl;
}
