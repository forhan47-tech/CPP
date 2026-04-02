#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um = {{1,"A"},{2,"B"},{3,"C"}};

    um.erase(2); // remove by key

    auto it = um.find(3);
    if(it != um.end()) um.erase(it); // remove by iterator
    
    um.erase(um.begin(), um.end()); // remove all

    cout << "Size after erase: " << um.size() << endl; 
}
