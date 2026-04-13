#ifndef SET_H
#define SET_H


class Set {
private:
	int hash(int element);
public:
	void insert(int element);
	void remove(int element);
	bool contains(int element);
	void display();
};

#endif