#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq1 = {10, 20, 30};  // Direct initialization

    deque<int> dq2(3, 0);  //  all set to 0 

    cout << "Deque 1: ";
    for (int num : dq1) cout << num << " "; 
    cout << endl; 

    cout << "Deque 2: ";
    for (size_t i = 0; i < dq.size(); ++i)
        cout << "dq[" << i << "] = " << dq[i] << endl;
    return 0;
}

