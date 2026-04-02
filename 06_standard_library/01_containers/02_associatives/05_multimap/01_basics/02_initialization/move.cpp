#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm1 = {{1,"X"}, {2,"Y"}};
    multimap<int,string> mm2(std::move(mm1)); // move constructor

    for(auto &p : mm2)
        cout << p.first << " -> " << p.second << endl;

    cout << "Size of mm1 after move: " << mm1.size() << endl; 
}
