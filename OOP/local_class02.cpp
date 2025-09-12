#include <iostream>
using namespace std;

void compute() {
    class Multiplier {
    public:
        void apply(int x, int y) {
            cout << "Result: " << x * y << "\n"; 
        }
    };

    Multiplier m;
    m.apply(5, 10); 
}

int main() {
    compute(); 
    return 0;
}
