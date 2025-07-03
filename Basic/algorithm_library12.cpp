#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> heap = {20, 30, 40, 10};

    // Create a max-heap
    make_heap(heap.begin(), heap.end());
    cout << "Max element (after make_heap): " << heap.front() << endl;

    // Add a new element and push it into the heap
    heap.push_back(50);
    push_heap(heap.begin(), heap.end());
    cout << "Max element (after push_heap): " << heap.front() << endl;

    // Remove the max element
    pop_heap(heap.begin(), heap.end());
    heap.pop_back(); // Actually removes the max element from the vector
    cout << "Max element (after pop_heap): " << heap.front() << endl;

    // Sort the heap into ascending order
    sort_heap(heap.begin(), heap.end());
    cout << "Sorted elements: ";
    for (int num : heap)
        cout << num << " ";
    cout << endl;

    return 0;
}
