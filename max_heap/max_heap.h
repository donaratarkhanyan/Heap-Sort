#ifndef MAX_HEAP_H
#define MAX_HEAP_H
#include <vector>

class MaxHeap
{
public:
    MaxHeap(std::vector<int>& vec);
    void buildMaxHeap();
    void push(int val);
    void pop();
    int top();
    void Sort();

private:
    std::vector<int>& m_vec;
    void heapify(std::vector<int>& vec, int i, int size);
};

#endif // MAX_HEAP_H