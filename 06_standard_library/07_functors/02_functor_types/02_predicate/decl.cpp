#include <iostream>
using namespace std;

class IsEven {
public:
    bool operator()(int x) {   // always return bool
        return x % 2 == 0;
    }
};

int main() {
    IsEven check;
    cout << check(4) << endl; 
    cout << check(5) << endl; 
}
