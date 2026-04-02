#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um = {{1,"A"},{2,"B"},{2,"C"}};
    cout << "Size: " << um.size() << endl; // 2 (duplicate key ignored)
}
