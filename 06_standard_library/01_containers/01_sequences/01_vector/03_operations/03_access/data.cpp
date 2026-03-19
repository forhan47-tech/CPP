#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    int* ptr = v.data();   // pointer to first element

    cout << "Access via pointer: " << *ptr << endl;    
    cout << "Second element via pointer: " << *(ptr+1) << endl;
    return 0;
}
