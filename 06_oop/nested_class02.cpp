#include <iostream>
using namespace std;

class Tree {
public:
    class Node {
    public:
        int value;
        Node(int v) : value(v) {}

        void showInfo() {
            cout << "value: " << value << endl;
        }
    };
};

int main() {
    Tree::Node n(10); // Creating a Node object using Tree's scope  
    cout << n.value << endl; 
    n.showInfo();
    return 0;
}
