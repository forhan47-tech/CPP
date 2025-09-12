#include <iostream>
#include <array>
using namespace std;

class MyClass {
private:
    array<int, 5> arr;

public:
    MyClass() {
        cout << "Enter 5 integers:\n";
        for (int i = 0; i < arr.size(); ++i) {
            cin >> arr[i];  
        }
    }

    void print() const {
        cout << "Array values: ";
        for (int val : arr) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    MyClass obj;
    obj.print();
    return 0;
}
