#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> m = {{1,"Alice"},{2,"Bob"}};
    
    cout << m[1] << endl;  
    m[3] = "Charlie";       // inserts new key 3
    cout << m[3] << endl;  
}
