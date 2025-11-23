#include <iostream>
using namespace std;

class MathUtils {
public:
    static int square(int x, int y) {
        return x + y;
    }
    MathUtils() = delete;
};

int main() {
    cout << "Square of 5: " << MathUtils::square(5, 6) << endl; 
    return 0;
}
