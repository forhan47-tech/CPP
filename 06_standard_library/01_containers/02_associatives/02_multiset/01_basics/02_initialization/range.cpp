#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4};
    multiset<int> ms(arr, arr + 5);   // initialize from array
    for (int x : ms) cout << x << " "; 
}
