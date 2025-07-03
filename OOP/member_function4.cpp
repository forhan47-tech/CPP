#include <iostream>
using namespace std;

class Secret {
private:
    int code = 999;

    friend void reveal(Secret);  // Friend function
};

void reveal(Secret s) {
    cout << "Secret code is: " << s.code << endl;
}

int main() {
    Secret s;
    reveal(s);
    return 0;
}
