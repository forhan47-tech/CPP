#include <iostream>
#include <memory>
using namespace std;

int main() {
    auto sp = make_shared<int>(200);
    weak_ptr<int> wp = sp; // non-owning reference

    if (auto sp = wp.lock()) { // convert to shared_ptr safely
        cout << *sp << endl; 
    }
}
