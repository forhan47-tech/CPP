#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm = {{1,"Alice"},{1,"Charlie"},{2,"Bob"}};

    cout << "Forward iteration:\n";
    for(auto it = mm.begin(); it != mm.end(); ++it)
        cout << it->first << " -> " << it->second << endl;
}
