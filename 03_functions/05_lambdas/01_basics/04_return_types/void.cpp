#include <iostream>
using namespace std;

int main() {
    auto printMsg = [](string msg) -> void {
        cout << "Message: " << msg << endl;
    };
    printMsg("Hello Lambda!");
}
