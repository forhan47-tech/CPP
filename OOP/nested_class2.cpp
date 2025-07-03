#include <iostream>
using namespace std;

class Safe {
private:
    int key = 4321;

public:
    class Guard {
    public:
        void authorize() {
            cout << "Guard: Access granted." << endl;
        }
    };

    void unlock() {
        Guard g;
        g.authorize();
        cout << "Unlocking safe with key: " << key << endl;
    }
};

int main() {
    Safe s;
    s.unlock();
    return 0;
}
