#include <iostream>
#include "tree.h"
 
using namespace std;
 
int main() {
    
    Tree<int> test;
    test.push(10);
    test.push(7);
    test.push(14);
    test.push(9);
    test.push(11);
    test.push(20);
    test.push(1);
    
    test.print();
    
    cout << endl << test.get_root()->right->data << endl;
    
    cout << endl;
    cout << "Exercise 1" << endl;
    cout << "max: " << test.min()->data << endl;
    cout << "min: " << test.max()->data << endl;
    
    return 0;
}