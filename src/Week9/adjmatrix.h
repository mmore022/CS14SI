#ifndef ADJMATRIX_H
#define ADJMATRIX_H

#include <iostream>
#include <vector>

using namespace std;

class AdjacencyMatrix{
    private:
        int n;
        vector<vector<int>> adj;
        bool *visited;
    public:
        AdjacencyMatrix(int n)
        {
            for(int i = 0; i < n; ++i)
            {
                vector<int> temp;
                adj.push_back(temp); // push back an empty vector
                for(int j = 0; j < n; ++j)
                {
                    adj.at(i).push_back(0); // push back 0s
                }
            }
            this->n = n;
        }
        ~AdjacencyMatrix()
        {
            for(int i = 0; i < n; ++i)
            {
                adj.at(i).clear();
            }
        }
        void add_edge(int origin, int destin, int weight)
        {
            adj.at(origin).at(destin) = weight;
        }
        void display()
        {
            for(int i = 0; i < n; ++i)
            {
                for(int j = 0; j < n; ++j)
                {
                    cout << adj.at(i).at(j) << ' ';
                }
                cout << endl;
            }
        }
        /* etc. */
};

#endif