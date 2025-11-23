#include <iostream>
#include <memory>

using namespace std;

int main() {
    shared_ptr<int> sharedPtr = make_shared<int>(50);
    weak_ptr<int> weakPtr = sharedPtr; 

    if (auto locked = weakPtr.lock()) { // Convert weak_ptr to shared_ptr safely
        cout << "Accessing safely: " << *locked << endl;
    }
    return 0;
}
