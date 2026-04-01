#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm1 = {{1,"Alice"},{2,"Bob"}};
    multimap<int,string> mm2 = {{3,"Charlie"},{4,"David"}};

    mm1.swap(mm2);

    for(auto [k,v] : mm1) cout << k << " -> " << v << endl;
}
