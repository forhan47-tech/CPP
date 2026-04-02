#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um = {{1,"A"},{2,"B"}};
    um.clear();
    cout << "Size after clear: " << um.size() << endl; 
}
