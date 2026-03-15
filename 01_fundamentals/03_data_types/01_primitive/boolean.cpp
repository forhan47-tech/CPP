#include <iostream>
using namespace std;

int main() {
    bool flag = false;
    cout << "Boolean: " << flag << "\n";
    
    flag = true;
    cout << "Boolean: " << flag << "\n";

    int num = 5;
    bool check = (num % 2 == 0); 
    cout << "Is " << num << " even? " << (check ? "Yes" : "No") << "\n";
    return 0;
}

