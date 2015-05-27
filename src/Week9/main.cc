#include "adjmatrix.h"
#include <iostream>

int main()
{
	cout << "Test 1" << endl;
	AdjacencyMatrix test1(6);
	
	test1.display();
	cout << endl;
	
	test1.add_edge(0, 3, 15);
	test1.add_edge(0, 4, 20);
	test1.add_edge(1, 5, 25);
	test1.add_edge(3, 0, 15);
	test1.add_edge(3, 1, 25);
	test1.add_edge(4, 2, 30);
	test1.add_edge(4, 5, 10);
	test1.add_edge(5, 1, 25);
	
	test1.display();
	cout << endl;
	
	return 0;
}