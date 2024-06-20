#include <iostream>
#include <vector>
#include "max_heap.h"

int main() {
    std::vector<int> vec = {3, 1, 6, 5, 2, 4};
    MaxHeap heap(vec);

    std::cout << "Building max heap from vector: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    heap.buildMaxHeap();

    std::cout << "Max heap: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::cout << "Top of the heap: " << heap.top() << std::endl;

    heap.push(7);
    std::cout << "After pushing 7, max heap: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    heap.pop();
    std::cout << "After popping top, max heap: ";
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
