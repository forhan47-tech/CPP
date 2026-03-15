#include <iostream>
using namespace std;

enum class Status { 
    Ok = 0, Error = 1, Unknown = 2 
};

int main() {
    Status s = Status::Ok;
    switch (s) {
        case Status::Ok:
            cout << "OK" << endl; break;
        case Status::Error:
            cout << "Error" << endl; break;
        case Status::Unknown:
            cout << "Unknown" << endl; break;
    }
    return 0;
}
