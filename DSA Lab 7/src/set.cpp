#include "../include/set.h"
#include <iostream>

int Set::hash(int element) {
	return element % 10;
}

Set::Set() {
	size = 10;
	arr = new std::list<int>[size];
}

Set::~Set() {
	delete[] arr;
}

void Set::insert(int element) {
	if (contains(element)) { // Element already in set.
		return;
	}

	int index = hash(element);
	arr[index].push_back(element);
}

void Set::remove(int element) {
	if (!contains(element)) { // Element not in set.
		std::cout << "Element not in set.";
		return;
	}

	int index = hash(element);
	arr[index].remove(element);
}

bool Set::contains(int element) {
	int index = hash(element);
	std::list<int>& linked_list = arr[index];

	for (const int& value : linked_list) {
		if (value == element) {
			return true;
		}
	}

	return false;
}

void Set::display() {
	std::cout << "Displaying Set...\n";
	for (int i = 0; i < size; i++) {
		std::cout << "Index " << i << ": ";
		if (arr[i].empty()) {
			std::cout << "Empty.";
		}
		else {
			for (const int& value : arr[i]) {
				std::cout << value << " -> ";
			}
			std::cout << "nullptr";
		}
		
		std::cout << std::endl;
	}
}