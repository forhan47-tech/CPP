#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um1 = {{1,"A"},{2,"B"}};
    unordered_map<int,string> um2(std::move(um1)); // um1 becomes empty

    cout << "Size of um1 after move: " << um1.size() << endl;
    cout << "Size of um2 after move: " << um2.size() << endl;
}
