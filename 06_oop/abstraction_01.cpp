#include <iostream>
using namespace std;

class CoffeeMachine {
private:
    void grindBeans() { 
        cout << "Grinding beans...\n"; 
    }

    void brew() { 
        cout << "Brewing coffee...\n"; 
    }

    void pour() { 
        cout << "Pouring coffee...\n"; 
    }

public:
    void makeCoffee() {
        grindBeans();
        brew();
        pour();
    }
};

int main() {
    CoffeeMachine cm;
    cm.makeCoffee(); // user sees only the public interface
    return 0;
}
