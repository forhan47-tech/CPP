#include <iostream>
#include <bitset> 
using namespace std;

int main() {
    int num1 = 255;
    int num2 = 6;

    // Display numbers in different bases
    cout << "Hexadecimal: " << hex << num1 << endl;   
    cout << "Octal: " << oct << num1 << endl;         
    cout << "Decimal (default): " << num1 << endl;  

    // Binary Representation
    cout << "num2 (4-bits view): " << bitset<4>(num2) << endl; 
    cout << "num2 (8-bits view): " << bitset<8>(num2) << endl; 

    // Display true or false
    cout << boolalpha;
    cout << "num1 == num2: " << (num1 == num2) << endl;    
    return 0;
}

