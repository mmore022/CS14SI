#include <iostream>
#include "tree.h"
#include <assert.h>
 
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
    
    cout << "Exercise 2" << endl;
    cout << "Found: " << test.find(14)->data << endl;
    cout << "Found: " << test.find(10)->data << endl;
    assert(test.find(15) == 0);
    
    return 0;
}