#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void pq_sort(std::vector<int> &v)
{
	unsigned s = v.size(); // size of the vector passed-in
	std::priority_queue<int> q;
	for(unsigned i = 0; i < s; ++i)
	{
		q.push(v.at(i));
	}
	for(unsigned i = 0; i < s; ++i)
	{
		v.at(s - 1 - i) = q.top();
		q.pop();
	}
}

int main()
{
	vector<int> v;
	v.push_back(4);
	v.push_back(2);
	v.push_back(3);
	v.push_back(5);
	v.push_back(0);
	cout << "Testing pq_sort" << endl;
	pq_sort(v);
	for(unsigned i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << ' ';
	}
	cout << endl;
	
	return 0;
}