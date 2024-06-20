#ifndef MIN_HEAP_H
#define MIN_HEAP_H
#include <vector>

class MinHeap
{
public:
    MinHeap(std::vector<int>& vec);
    void buildMinHeap();
    void push(int val);
    void pop();
    int top();
    void Sort();

private:
    std::vector<int>& m_vec;
    void heapify(std::vector<int>& vec, int i, int size);
};

#endif // MIN_HEAP_H