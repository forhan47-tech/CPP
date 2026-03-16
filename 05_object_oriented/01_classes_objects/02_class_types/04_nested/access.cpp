#include <iostream>
using namespace std;

class Outer {
    int secret = 42;
public:
    class Inner {
    public:
        void reveal(Outer& o) {
            cout << "Outer's secret: " << o.secret << endl;   // access outer
        }
    };
};

int main() {
    Outer out;
    Outer::Inner in;
    in.reveal(out);
}
