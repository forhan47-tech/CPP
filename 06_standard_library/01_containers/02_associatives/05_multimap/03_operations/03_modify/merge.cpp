#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm1 = {{1,"A"}, {2,"B"}};
    multimap<int,string> mm2 = {{2,"X"}, {3,"C"}};

    mm1.merge(mm2);

    for(auto &p : mm1)
        cout << p.first << " -> " << p.second << endl;
}
