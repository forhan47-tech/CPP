#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm = {{1,"Alice"},{1,"Charlie"},{2,"Bob"}};
    cout << "Count of key 1: " << mm.count(1) << endl;
}
