#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> m = {{1,"Alice"},{3,"Charlie"},{5,"Eve"}};

    auto range = m.equal_range(3);
    if(range.first != range.second)
        cout << "Equal range of 3: " << range.first->first << " -> " << range.first->second << endl;
    else
        cout << "Key not found!" << endl;
}