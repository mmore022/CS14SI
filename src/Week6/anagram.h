#ifndef _ANAGRAM_H_
#define _ANAGRAM_H_
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

class Anagram
{
	private:
	map<string, vector<string>> a;
	vector<string> words;
	vector<string> findA(string s) // find the vector of anagrams
	{
		vector<string> v;
		// for(unsigned i = 0 ; i < words.size(); ++i)
		// {
			
		// }
		return v;
	}
	
	public:
	const vector<string>& get_anagrams(string s)
	{
		if(a.find(s) != a.end()) // if the string is already in the map
		{
			std::sort(s.begin(), s.end()); // sort the string
			return a[s]; // return the vector of anagrams
		}
		else
		{
			std::sort(s.begin(), s.end());
			a[s] = findA(s); // add the string to the map
			return a[s]; // return the vector of anagrams
		}
	}
};

#endif