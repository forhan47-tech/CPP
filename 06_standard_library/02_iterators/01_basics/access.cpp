#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    auto it = v.begin();

    cout << "First element: " << *it << endl;       
    cout << "Third element: " << *(it + 2) << endl; 
    cout << "Indexing: " << it[4] << endl;         
}
