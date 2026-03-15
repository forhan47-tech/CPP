#include <iostream>
#include <future>
using namespace std;

int main() {
    future<void> f = async([](){
        cout << "Hello from async lambda!" << endl;
    });
    f.get(); // ensures completion
}
