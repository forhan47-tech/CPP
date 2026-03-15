#include <iostream>
using namespace std;

enum class Status : unsigned int { 
    Ok = 0, Error = 1, Unknown = 2 
};

int main() {
    Status s = Status::Ok;
    if (s == Status::Ok) {
        cout << "Status is OK" << endl;
    }
    return 0;
}
