#include <iostream>
using namespace std;

class Item {
private:
    int code;

public:
    Item(int code) {
        this->code = code;
    }

    void show() {
        cout << "Item code: " << code << endl;
    }
};

int main() {
    Item item(123);
    item.show();
    return 0;
}
