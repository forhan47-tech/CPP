#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm = {{1,"A"}, {2,"B"}, {2,"C"}};

    auto it = mm.find(2);
    if(it != mm.end())
        cout << "First occurrence of 2: " << it->second << endl; 
}
