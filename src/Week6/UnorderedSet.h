#ifndef UNORDEREDSET_H
#define UNORDEREDSET_H

#include <iostream>

using namespace std;

typedef std::string T;
class UnorderedSet
{
	private:
	public:
	int count(const T & elem)
	void remove(const T & elem) 
	void insert(const T & elem)
	void print() {
		unsigned int used_buckets = 0;
		unsigned int num_elems = 0;
		for(unsigned int i = 0; i < NUM_BUCKETS; ++i) {
			const auto & bucket = _buckets[i];
			if(!bucket.empty()) {
				++used_buckets;
				std::cout << "bucket #" <<  i << ':';
				for(const auto & elem: bucket) {
					std::cout << elem << ',';
					++num_elems;
					
				}
				std::cout << std::endl << std::endl;
			}
		}
		std::cout << "Number of buckets used: " << used_buckets
		<< '/'  << NUM_BUCKETS  << std::endl;
		std::cout << "Number of total elements: " << num_elems << std::endl;
	}

};

#endif