#ifndef __TREE_H__
#define __TREE_H__
 
#include <iostream>
#include <queue>
 
template<typename T>
class Tree {
    private:
        struct Node {
            T data;
            Node *right;
            Node *left;
            Node():     data(0), right(0), left(0) { }
            Node(T d):  data(d), right(0), left(0) { }
        };
 
        Node *root;
    
        Node *push_(T val, Node *n) {
            if(!n) n = new Node(val);
            else if(val < n->data) n->left = push_(val, n->left);
            else if(val > n->data) n->right = push_(val, n->right);
            else n->data = val; //if val is equal to data
            
            return n;
        }
        
        Node* find(T value, Node* p) // find helper function
        {
        	if(!p) return 0;
        	if(p->data == value)
        	{
        		return p;
        	}
        	else if(value < p->data) 
        	{
        		return find(value, p->left);
        	}
        	else
        	{
        		return find(value, p->right);
        	}
        }
        
        T total_(Node *n)
        {
        	if(!n)
        	{
        	    return T();
        	}
        	else
        	{
        	    return n->data + total_(n->left) + total_(n->right);
        	}
        }
    
    public:
        Tree():root(0) { }
    
        Node* get_root() { return root; }
    
        void push(T val) { root = push_(val, root); }
    
        void print() {
            typedef std::pair<const Node*,int> node_level;
            std::queue<node_level> q;
            q.push(node_level(root, 1));
            int level = 1;
            
            while (!q.empty()) {
                node_level nl = q.front();
                q.pop();
                const Node *n = nl.first;
                if (!n) { continue; }
                
                if (level != nl.second) {
                    std::cout << std::endl << std::endl;
                    level = nl.second;
                }
                std::cout << n->data << ' ';
                q.push(node_level(n->left,  1 + level));
                q.push(node_level(n->right, 1 + level));
            
            }
            std::cout << std::endl;
        }
        
        Node* min()
        {
        	Node *mn = root;
        	while(mn->left != 0)
        	{
        		mn = mn->left;
        	}
        	return mn;
        }

        Node* max()
        {
        	Node *mx = root;
        	while(mx->right != 0)
        	{
        		mx = mx->right;
        	}
        	return mx;
        }
        
        Node* find(T value)
        {
        	if(root->data == value)
        	{
        		return root;
        	}
        	else
        	{
        		return find(value, root);
        	}
        }
        
        T total()
        {
        	return total_(root);
        }
        
};
 
 
#endif