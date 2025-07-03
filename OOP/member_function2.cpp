#include <iostream>
using namespace std;

class Box {
private:
    int length;
public:
    void setLength(int l);  // declared
    void show();
};

void Box::setLength(int l) {
    length = l;
}

void Box::show() {
    cout << "Length = " << length << endl;
}

int main() {
    Box b;
    b.setLength(10);
    b.show();
    return 0;
}
