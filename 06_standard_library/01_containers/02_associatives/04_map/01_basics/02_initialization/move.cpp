#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> m1 = {{1,"X"}, {2,"Y"}};
    map<int,string> m2(std::move(m1)); // move constructor
    for(auto &p : m2)
        cout << p.first << " -> " << p.second << endl;

    cout << "Size of m1 after move: " << m1.size() << endl; 
}
