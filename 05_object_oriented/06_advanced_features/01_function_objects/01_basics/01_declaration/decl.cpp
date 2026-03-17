#include <iostream>
using namespace std;

class Task {
public:
    void operator()() {
        cout << "Hello Functor!" << endl;
    }
};

int main() {
    Task t1;
    t1();  
}
