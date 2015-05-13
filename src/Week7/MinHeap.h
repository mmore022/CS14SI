#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>

template<typename T, typename Less=std::less<T>>
class MinHeap {
    public:
        MinHeap()
        {
            _heap.push_back(0);
        }
        const T & top()
        {
            return _heap.front();
        }
        // void push(const T & elem)
        // {
        //     _heap.push_back(elem);
        //     int i = _heap.size() - 1;
        //     if(i == 0) return;
        //     hUp(i);
        // }
        void pop()
        {
            int last_i = _heap.size() - 1;
            _heap.at(1) = _heap.at(last_i);
            _heap.pop_back();
            hDown(1);
        }
        bool empty()
        {
            return _heap.empty();
        }
        void heapify(const std::vector<T> & vec)
        {
            for(unsigned i = 0; i < vec.size(); ++i)
            {
                push(vec.at(i));
            }
        }
    private:
        std::vector<T> _heap;
        Less _less;
        // void hUp(int index);
        // Next, find the smallest of the root's two children. If the smallest 
        // of those is smaller than the new root, swap with the root. Repeat 
        // this process on the swapped branch through to the bottom of the tree
        void hDown(int n)
        {
            if(n == _heap.size() - 1)
            {
                return;
            }
            if(_less(_heap.at(2 * n), _heap.at(2 * n + 1)) < _heap.at(1))
            {
                swap(_heap.at(1), _heap.at(2 * n));
                hDown(2 * n);
            }
            else
            {
                swap(_heap.at(1), _heap.at(2* n + 1));
                hDown(2 * n + 1);
            }
        }
};