#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um = {
        {1,"Alice"},
        {2,"Bob"},
        {2,"Charlie"} // duplicate key ignored
    };

    for(auto &p : um)
        cout << p.first << " -> " << p.second << endl;
}
