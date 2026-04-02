#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us1 = {1,2,3};
    unordered_set<int> us2(std::move(us1)); // us1 becomes empty

    cout << "Size of us1 after move: " << us1.size() << endl;
    cout << "Size of us2 after move: " << us2.size() << endl;
}
