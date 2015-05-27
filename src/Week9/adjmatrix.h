#ifndef ADJMATRIX_H
#define ADJMATRIX_H

#include <iostream>
#include <vector>

using namespace std;

class AdjacencyMatrix{
    private:
        int n;
        int **adj;
        bool *visited;
    public:
        AdjacencyMatrix(int n)
        {
            adj = new int*[n]; // create matrix
            for(int i = 0; i < n; ++i)
            {
                adj[i] = new int[n];
            }
            for(int i = 0; i < n; ++i) // make all values 0
            {
                for(int j = 0; j < n; ++j)
                {
                    adj[i][j] = 0;
                }
            }
            visited = new bool[n]; // create visited array
            for(int i = 0; i < n; ++i) // initialize values to 0
            {
                visited[i] = 0;
            }
            this->n = n;
        }
        ~AdjacencyMatrix()
        {
            for(int i = 0; i < n; ++i) // delete each array
            {
                delete []adj[i];
            }
            delete []adj;
            delete []visited; // delete the visited array
        }
        void add_edge(int origin, int destin, int weight)
        {
            if(origin >= n || destin >= n) // check if possible to add edge
            {
                cout << "Could not add edge." << endl;
                return;
            }
            adj[origin][destin] = weight; // add edge
        }
        void display()
        {
            for(int i = 0; i < n; ++i)
            {
                for(int j = 0; j < n; ++j)
                {
                    cout << adj[i][j] << ' ';
                }
                cout << endl;
            }
        }

};

#endif