#include <iostream>
using namespace std;

class Box {
    int volume;
public:
    Box(int v) : volume(v) {}

    bool operator<(const Box &b) {
        return volume < b.volume;
    }
};

int main() {
    Box b1(50), b2(100);
    cout << (b1 < b2) << endl;   
}
