#include <iostream>
#include <memory>

using namespace std;

int main() {
    shared_ptr<int> ptr1 = make_shared<int>(20);
    shared_ptr<int> ptr2 = ptr1; // Both pointers share ownership

    cout << "Reference count: " << ptr1.use_count() << endl;

    return 0;
} // Object is deleted only when reference count reaches zero



