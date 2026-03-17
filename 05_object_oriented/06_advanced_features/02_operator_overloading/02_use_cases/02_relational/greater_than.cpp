#include <iostream>
using namespace std;

class Box {
    int length;
public:
    Box(int l) : length(l) {}

    bool operator>(const Box &b) {
        return length > b.length;
    }
};

int main() {
    Box b1(150), b2(100);
    cout << (b1 > b2) << endl;  
}
