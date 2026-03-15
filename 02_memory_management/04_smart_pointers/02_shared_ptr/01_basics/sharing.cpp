#include <iostream>
#include <memory>
using namespace std;

int main() {
    auto sp1 = make_shared<int>(20);
    auto sp2 = sp1; // both share ownership
    
    cout << *sp1 << " and " << *sp2 << endl;
    cout << "Use count = " << sp1.use_count() << endl; 
}
