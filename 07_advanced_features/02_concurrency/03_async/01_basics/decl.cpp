#include <iostream>
#include <future>
using namespace std;

int compute() { 
    return 42; 
}

int main() {
    future<int> f = async(compute); // run asynchronously
    cout << "Result: " << f.get() << endl;
}
