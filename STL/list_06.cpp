#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {30, 10, 50, 20, 40};

    l.sort();  // Sorts in ascending order   

    cout << "Sorted Ascending: ";
    for (int num : l) cout << num << " ";  

    l.sort(greater<int>());  // Sorts in descending order
    
    cout << "Sorted Descending: ";
    for (int num : l) cout << num << " ";  

    return 0;
}

