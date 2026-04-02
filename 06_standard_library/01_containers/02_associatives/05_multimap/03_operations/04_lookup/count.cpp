#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm = {{1,"A"}, {2,"B"}, {2,"C"}, {3,"D"}};
    cout << "Count of key 2: " << mm.count(2) << endl; 
}
