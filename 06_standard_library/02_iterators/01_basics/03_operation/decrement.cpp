#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst = {10, 20, 30};
    auto it = lst.end();   
                 
    cout << *it << endl;  
    --it;  // move backward
    cout << *it << endl;  
}
