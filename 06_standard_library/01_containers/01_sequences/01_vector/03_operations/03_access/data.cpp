#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};
    int* arr = v.data(); // pointer to first element

    cout << "Elements via pointer: ";
    for(int i=0; i<v.size(); i++)
        cout << *(arr + i) << " "; 
}
