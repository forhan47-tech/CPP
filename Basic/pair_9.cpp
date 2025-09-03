#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main() {
     auto result = make_pair(5, 7);

    cout << "Sum: " << result.first + result.second << "\n";
    return 0;
}
