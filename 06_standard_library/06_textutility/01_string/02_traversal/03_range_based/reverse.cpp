#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Modern";

    cout << "Characters: ";
    for(char ch : string(s.rbegin(), s.rend())) 
        cout << ch << " ";  
}
