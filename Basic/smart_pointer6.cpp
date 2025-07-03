#include <iostream>
#include <memory>

using namespace std;

class Node {
public:
    weak_ptr<Node> neighbor; // Weak reference to prevent cyclic dependency
    Node() { cout << "Node Created\n"; }
    ~Node() { cout << "Node Destroyed\n"; }
};

int main() {
    shared_ptr<Node> nodeA = make_shared<Node>();
    shared_ptr<Node> nodeB = make_shared<Node>();

    nodeA->neighbor = nodeB; // Prevents cyclic dependency

    return 0;
}
