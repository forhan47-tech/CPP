#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um = {{1,"One"}, {2,"Two"}};

    for(auto& [key, value] : um)
        cout << key << " -> " << value << endl;
}
