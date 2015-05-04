#include <iostream>
#include <map>
#include <vector>
#include <fstream>

using namespace std;

std::map<std::string, unsigned int> freq_map(std::vector<std::string> words)
{
	map<string, unsigned int> m;
	
	for(auto it = words.begin(); it != words.end(); it++)
	{
		m[*it] += 1;
	}
	return m;
}

std::vector<std::string> top_n(std::map<std::string, unsigned int> freq_map, unsigned int n = 5)
{
	// std::vector<std::Pair<std::string, unsigned int>> vctr;
	// for(auto it = freq_map.begin(); it != freq_map.end(); ++it)
	// {
	// 	Pair<std::string, unsigned int> p(*it)
	// 	vctr.push_back();
	// }
}

int main(int argc, char* argv[] )
{
	vector<string> v;
	v.push_back("hello");
	v.push_back("strawberry");
	v.push_back("tree");
	v.push_back("hello");
	v.push_back("hello");
	
	map<string, unsigned int> test = freq_map(v);
	for(auto it = test.begin(); it != test.end(); ++it)
	{
		cout << it->first << ' ' << it->second << endl;
	}
	
	ifstream fin;
    fin.open(argv[1]); // open file
    vector<string> v2;
    if(fin.is_open())
    {
    	string word;
	    while(fin >> word)
	    {
	    	v2.push_back(word);
	    }
    }
    else
    {
    	cout << "Error" << endl;
    }
	fin.close();
    
    map<string, unsigned int> test2 = freq_map(v2);
	for(auto itt = test2.begin(); itt != test2.end(); ++itt)
	{
		cout << itt->first << ' ' << itt->second << endl;
	}
	
	return 0;
}