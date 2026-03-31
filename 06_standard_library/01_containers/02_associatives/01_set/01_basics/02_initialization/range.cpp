#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    set<int> s(arr, arr + 4);   // initialize from array
    for (int x : s) cout << x << " "; 
}
