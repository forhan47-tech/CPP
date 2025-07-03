#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    auto loc = distance(v.begin(), v.end());
    cout << "Distance between iterators: " << loc << endl;

    return 0;
}

