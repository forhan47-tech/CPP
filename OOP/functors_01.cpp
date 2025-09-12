#include <iostream>
using namespace std;

class Task {
public:
    void operator()() const {
        cout << "Hello, NAIMUDDIN!" << endl;
    }
};

int main() {
    Task log;
    log();  
}
