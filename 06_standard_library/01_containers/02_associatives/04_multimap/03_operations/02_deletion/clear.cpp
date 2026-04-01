#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm = {{1,"Alice"},{2,"Bob"}};
    mm.clear();
    cout << "Size after clear: " << mm.size() << endl; 
}
