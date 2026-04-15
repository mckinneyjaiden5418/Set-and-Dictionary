#ifndef SET_H
#define SET_H
#include <list>

class Set {
private:
	int size;
	std::list<int>* arr;

	int hash(int element);
public:
	Set();
	~Set();
	void insert(int element);
	void remove(int element);
	bool contains(int element);
	void display();
};

#endif