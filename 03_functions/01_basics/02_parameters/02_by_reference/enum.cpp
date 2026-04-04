#include <iostream>
using namespace std;

enum class Status { 
    Idle, Running, Stopped 
};

void setStatus(Status &s, Status newStatus) { // reference
    s = newStatus;
}

int main() {
    Status machine = Status::Idle;
    setStatus(machine, Status::Running);
    cout << "Machine status changed.\n";
}
