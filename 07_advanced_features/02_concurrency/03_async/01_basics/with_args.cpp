#include <iostream>
#include <future>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    future<int> f = async(add, 5, 7);
    cout << "Sum: " << f.get() << endl;
}
