#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {10,20,30,40};

    for(size_t i = 0; i < us.bucket_count(); ++i) {
        cout << "Bucket " << i << ": ";
        for(auto it = us.begin(i); it != us.end(i); ++it)
            cout << *it << " ";
        cout << endl;
    }
}
