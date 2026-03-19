#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    cout << "Is empty? " << v.empty() << endl; 

    v.push_back(10);
    cout << "Is empty after push_back? " << v.empty() << endl; 
    return 0;
}
