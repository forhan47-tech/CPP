#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> m;
    m.insert({1,"Alice"});
    m.insert({2,"Bob"});
    
    auto result = m.insert({1,"Charlie"}); // fails, key 1 exists
    cout << "Insert success? " << (result.second ? "Yes" : "No") << endl;
}
