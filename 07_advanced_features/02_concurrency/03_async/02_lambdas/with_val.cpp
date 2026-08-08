#include <iostream>
#include <future>
using namespace std;

int main() {
    int x = 10, y = 20;

    future<int> f = async([x, y](){ // capture by reference also possible
        return x + y;
    });

    cout << "Sum: " << f.get() << endl;
}
