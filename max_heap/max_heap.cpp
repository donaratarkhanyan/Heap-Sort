#include <iostream>
#include "max_heap.h"

MaxHeap::MaxHeap(std::vector<int>& vec) : m_vec {vec}
{}

void MaxHeap::buildMaxHeap()
{
    for (int i = (m_vec.size() / 2) - 1; i >= 0; --i) {
        heapify(m_vec, i, m_vec.size());
    }
}

void MaxHeap::heapify(std::vector<int>& vec, int i, int size) 
{
    int left = (i * 2) + 1;
    int right = (i * 2) + 2;
    int large = i;
    if (left < size && vec[left] > vec[large]) {
        large = left;
    } 
    if (right < size && vec[right] > vec[large]) {
        large = right;
    } 
    if (large != i) {
        std::swap(vec[large], vec[i]);
        heapify(vec, large, size);
    }
}

void MaxHeap::push(int val)
{
    m_vec.push_back(val);
    int tmp = m_vec.size() - 1;
    int parent = (tmp - 1) / 2;
    while (m_vec[parent] < m_vec[tmp]) {
        std::swap (m_vec[parent], m_vec[tmp]);
        tmp = parent;
        parent = (tmp - 1) / 2;
    }
}

void MaxHeap::pop()
{
    std::swap(m_vec[0], m_vec[m_vec.size() - 1]);
    m_vec.pop_back();
    heapify(m_vec, 0, m_vec.size());
}


int MaxHeap::top() {
    if (m_vec.size() > 0) {
        return m_vec[0];
    } else {
        throw std::out_of_range("Heap is empty");
    }
}


void MaxHeap::Sort() 
{
    buildMaxHeap();
    for (int i = m_vec.size() - 1; i > 0; --i) {
        std::swap (m_vec[i], m_vec[0]);
        heapify(m_vec, 0, m_vec.size());
    }
}