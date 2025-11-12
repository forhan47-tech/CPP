#include <iostream>
#include <vector>
using namespace std;

class MyClass {
private:
    vector<int> arr; 

public:
    MyClass() {
        arr.resize(10);
        
        cout << "Enter 10 integers: ";
        for (int i = 0; i < arr.size(); ++i) {
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
