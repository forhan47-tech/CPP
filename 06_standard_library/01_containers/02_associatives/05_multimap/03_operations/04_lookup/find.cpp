#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm = {{1,"Alice"},{1,"Charlie"},{2,"Bob"}};

    auto it = mm.find(1);
    if(it != mm.end())
        cout << "Found: " << it->first << " -> " << it->second << endl;
}
