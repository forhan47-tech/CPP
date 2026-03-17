#include <iostream>
using namespace std;

class Box {
    int vol;
public:
    Box(int v) : vol(v) {}

    bool operator<(const Box &b) {
        return vol < b.vol;
    }
};

int main() {
    Box b1(50), b2(100);
    cout << (b1 < b2) << endl;   
}
