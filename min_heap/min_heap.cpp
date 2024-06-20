#include <iostream>
#include "min_heap.h"

MinHeap::MinHeap(std::vector<int>& vec) : m_vec {vec} 
{}

void MinHeap::buildMinHeap() 
{
    for (int i = (m_vec.size() / 2) - 1; i >= 0; --i) {
        heapify(m_vec, i, m_vec.size());
    }
}

void MinHeap::heapify(std::vector<int>& vec, int i, int size) 
{
    int left = (i * 2) + 1;
    int right = (i * 2) + 2;
    int small = i;
    if (left < size && vec[left] < vec[small]) {
        small = left;
    }
    if (right < size && vec[right] < vec[small]) {
        small = right;
    }
    if (small != i) {
        std::swap (vec[i], vec[small]);
        heapify(vec, small, size);
    }
}

void  MinHeap::push(int val) 
{
    m_vec.push_back(val);
    int tmp = m_vec.size() - 1;
    int parent = (tmp - 1) / 2;
    while (m_vec[parent] > m_vec[tmp]) {
        std::swap(m_vec[parent], m_vec[tmp]);
        tmp = parent;
        parent = (tmp - 1) / 2;
    }
}

void MinHeap::pop() 
{
    if (m_vec.empty()) {
        throw std::out_of_range("Heap is empty");
    }
    std::swap(m_vec[0], m_vec[m_vec.size() - 1]);
    m_vec.pop_back();
    heapify(m_vec, 0, m_vec.size());
}


int MinHeap::top() {
    if (m_vec.size() > 0) {
        return m_vec[0];
    } else {
        throw std::out_of_range("Heap is empty");
    }
}

void MinHeap::Sort()
{
    buildMinHeap();
    for (int i = m_vec.size() - 1; i > 0; --i) {
        std::swap(m_vec[0], m_vec[i]);
        heapify(m_vec, i, m_vec.size());
    }
}