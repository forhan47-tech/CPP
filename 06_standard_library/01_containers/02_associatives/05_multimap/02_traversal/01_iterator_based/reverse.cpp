#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm = {{1,"Alice"},{1,"Charlie"},{2,"Bob"}};

    cout << "Reverse iteration:\n";
    for(auto it = mm.rbegin(); it != mm.rend(); ++it)
        cout << it->first << " -> " << it->second << endl;
}
