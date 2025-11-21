#include <iostream> 
#include "hello.hpp"
#include "math_utils.hpp"

int main() {
    int x = 3, y = 4;

    sayHello();
    std::cout << "Add: " << add(x, y) << std::endl;
    std::cout << "Multiply: " << multiply(x, y) << std::endl;
    return 0;
}
