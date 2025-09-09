#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> mm = {{1, "Apple"}, {2, "Banana"}, {2, "Blueberry"}, {3, "Cherry"}};

    cout << "Count of Key 2: " << mm.count(2) << endl; 

    auto it = mm.find(2);
    cout << "First occurrence of Key 2: " << it->second << endl;

    cout << "Is key 2 exist? " << (mm.contains(2) ? "Yes" : "No") << endl;  
    return 0;
}


