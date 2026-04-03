#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "Apple";
    string b = "Banana";

    int res = a.compare(b);   // using compare()  
    if(res < 0) 
        cout << "Not Equal" << endl;

    if(a < b)                    // using operator<
        cout << "Not Equal" << endl;
}
