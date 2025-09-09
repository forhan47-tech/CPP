#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

int main() {
    forward_list<int> fl = {1, 2, 3, 4, 5};

    cout << "Size: " << distance(fl.begin(), fl.end()) << endl;
    return 0;
}
