#include <iostream>
using namespace std;

#define CHECK_POSITIVE(x) if (x > 0) { \
                              cout << x << " is positive"; \
                          } else { \
                              cout << x << " is not positive"; \
                          }

int main() {
    CHECK_POSITIVE(-5); 
}
