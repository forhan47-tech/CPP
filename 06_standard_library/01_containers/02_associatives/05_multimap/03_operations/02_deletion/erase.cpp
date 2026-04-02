#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm = {{1,"A"},{2,"B"},{2,"C"},{3,"D"}};

    mm.erase(2); // removes all pairs with key 2

    auto it = mm.find(3);
    if(it != mm.end()) mm.erase(it); // remove one occurrence
    
    mm.erase(mm.begin(), mm.end()); // remove all

    cout << "Size after erase: " << mm.size() << endl; 
}
