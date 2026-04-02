#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um = {{1,"A"},{2,"B"},{3,"C"}};

    for(size_t i = 0; i < um.bucket_count(); ++i) {
        cout << "Bucket " << i << ": ";
        for(auto it = um.begin(i); it != um.end(i); ++it)
            cout << it->first << " -> " << it->second << " ";
        cout << endl;
    }
}
