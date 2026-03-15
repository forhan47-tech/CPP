#include <iostream>
using namespace std;

class Example {
    mutable int cache; // can be modified even in const objects
public:
    Example() {
        cache = 0;
    
    }
    void setCache(int val) const {
        cache = val;
    }
    void showCache() const {
        cout << "Cache: " << cache << endl;
    }
};

int main() {
    const Example obj; // const object
    obj.setCache(42); 
    obj.showCache();
    return 0;
}
