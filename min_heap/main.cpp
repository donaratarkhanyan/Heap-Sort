#include <iostream>
#include <vector>
#include "min_heap.h"

int main() {
    std::vector<int> vec = {6, 5, 4, 3, 2, 1};
    MinHeap heap(vec);

    std::cout << "Building min heap from vector: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    heap.buildMinHeap();

    std::cout << "Min heap: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::cout << "Top of the heap: " << heap.top() << std::endl;

    heap.push(0);
    std::cout << "After pushing 0, min heap: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    heap.pop();
    std::cout << "After popping top, min heap: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    heap.Sort();
    std::cout << "After sorting, heap: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
