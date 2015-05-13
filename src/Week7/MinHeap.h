#include <vector>
#include <algorithm>
#include <functional>

template<typename T, typename Less=std::less<T>>
class MinHeap {
    public:
        MinHeap()
        {
            _heap.push_back(0);
        }
        // const T & top();
        void push(const T & elem);
        // void pop();
        bool empty()
        {
            return _heap.empty();
        }
        // void heapify(const std::vector<T> & vec);
    private:
        std::vector<T> _heap;
        Less _less;
};