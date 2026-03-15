#include <iostream>
#include <future>
using namespace std;

int main() {
    future<int> f = async([](){
        return 42;
    });

    cout << "Result: " << f.get() << endl;
}
