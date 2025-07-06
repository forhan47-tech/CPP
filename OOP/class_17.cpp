#include <iostream>
#include <vector>
using namespace std;

class MyClass {
private:
    vector<int> arr;

public:
    MyClass() {
        int size;
        cout << "Enter how many integers you want to store: ";
        cin >> size;

        arr.resize(size);
        cout << "Enter " << size << " integers:\n";
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }

    void print() const {
        cout << "Vector values: ";
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
